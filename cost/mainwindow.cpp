#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QComboBox>
#include <QSpinBox>
#include <QLabel>
#include <QHBoxLayout>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QMap>
#include <QPixmap>
#include <QHeaderView>
#include <QFileDialog>

QMap<int, QStringList> comboOptions = {
    {0, {"Motor", "Motor 1 (120kg)", "Motor 2 (300kg)"}},
    {1, {"Motor Driver","L2DB4830-CAFC"}},
    {2, {"IMU", "WT901 C-RS485", "WT901 C-232", "HWT901B"}},
    {3, {"LIDAR", "RPLIDAR A2", "LTME-02A","SLAMTEC RPLIDAR S1","HESAI XT16 XT32 Lidar","Velodyne VLS-128"}},
    {4, {"GPS", "WTRTK-980", "WTRTK-982", "WTRTK-982-LTE-G", "WTGAHRS2"}},
    {5, {"GPS Accessories", "RTK Base Station Antenna", "RTK Mobile Station Antenna"}},
    {6, {"Caster Wheel", "Wheel 1"}},
    {7, {"Camera", "Camera 1", "Camera 2", "Camera 3"}},
    {8, {"Motherboard","Motherboard 1"}},
    {9, {"Robot Controller","ROM Robot Controller"}},
    {10, {"Robot Design & Body parts","Po Po robot chassis","Kilo robot chassis"}},
    {11, {"Battery & Docking System","Battery 1","Docking System 1"}},
    };

QMap<QString, ItemData> itemDataMap;

void MainWindow::loadPricesFromCSV(const QString &resourcePath) {
    QFile file(resourcePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open resource CSV file:" << resourcePath << "Error:" << file.errorString();
        return;
    }

    QTextStream in(&file);
    itemDataMap.clear();
    int lineNumber = 0;
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        lineNumber++;
        if (line.isEmpty()) continue;

        QStringList parts = line.split(',', Qt::KeepEmptyParts);

        if (parts.size() < 5) {
            qDebug() << "Skipping line" << lineNumber << "- not enough columns.";
            continue;
        }

        QString itemName = parts[1].trimmed().remove('"');
        QString description = parts[2].trimmed().remove('"');
        QString imagePath = parts[3].trimmed().remove('"');
        QString priceStr = parts[4].trimmed().remove('$');

        bool ok;
        double price = priceStr.toDouble(&ok);
        if (ok && !itemName.isEmpty()) {
            itemDataMap[itemName] = {imagePath, price, description};
        } else {
            qDebug() << "Invalid data at line" << lineNumber;
        }
    }

    file.close();
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    loadPricesFromCSV(":/data/Robot Estimate Cost - Sheet1.csv");
    int itemRows = 11;
    int totalRow = itemRows;
    ui->tableWidget->setRowCount(itemRows + 1);
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
    ui->tableWidget->setColumnWidth(0, 10);
    ui->tableWidget->setColumnWidth(1, 200);
    ui->tableWidget->setColumnWidth(3, 80);
    ui->tableWidget->setColumnWidth(4, 200);
    ui->tableWidget->setColumnWidth(5, 200);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(6, QHeaderView::Stretch);

    for (int row = 0; row <= itemRows; ++row)
        ui->tableWidget->setRowHeight(row, 150);

    for (int row = 0; row < itemRows; ++row) {
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(row + 1)));

        QComboBox *combo = new QComboBox(this);
        combo->addItems(comboOptions[row]);
        ui->tableWidget->setCellWidget(row, 1, combo);

        QLabel *imageLabel = new QLabel();
        QLabel *descLabel = new QLabel("Select an item");
        QHBoxLayout *layout = new QHBoxLayout();
        layout->addWidget(imageLabel);
        layout->addWidget(descLabel);
        layout->setContentsMargins(0, 0, 0, 0);

        QWidget *descWidget = new QWidget();
        descWidget->setLayout(layout);
        ui->tableWidget->setCellWidget(row, 2, descWidget);

        QSpinBox *spinBox = new QSpinBox(this);
        spinBox->setRange(0, 100);
        ui->tableWidget->setCellWidget(row, 3, spinBox);

        QTableWidgetItem *unitPriceItem = new QTableWidgetItem("0");
        unitPriceItem->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(row, 4, unitPriceItem);

        QTableWidgetItem *totalItem = new QTableWidgetItem("0");
        totalItem->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(row, 5, totalItem);

        auto updateTotalCost = [=]() {
            double grandTotal = 0;
            for (int r = 0; r < itemRows; ++r)
                grandTotal += ui->tableWidget->item(r, 5)->text().toDouble();

            QTableWidgetItem *grandTotalItem = new QTableWidgetItem(QString::number(grandTotal, 'f', 2));
            grandTotalItem->setTextAlignment(Qt::AlignCenter);
            grandTotalItem->setBackground(Qt::yellow);
            ui->tableWidget->setItem(totalRow, 5, grandTotalItem);
        };

        connect(spinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
            double unitPrice = ui->tableWidget->item(row, 4)->text().toDouble();
            double total = unitPrice * value;
            QTableWidgetItem *totalItem = new QTableWidgetItem(QString::number(total, 'f', 2));
            totalItem->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->setItem(row, 5, totalItem);
            updateTotalCost();
        });

        connect(combo, &QComboBox::currentTextChanged, this, [=](const QString &text){
            QString imagePath;
            double unitPrice = 0;
            QString description = "Select an item";

            QString bestMatch;
            int bestScore = 0;
            for (const QString &key : itemDataMap.keys()) {
                int score = 0;
                for (const QString &word : text.split(" ", Qt::SkipEmptyParts))
                    if (key.contains(word, Qt::CaseInsensitive)) score++;

                if (score > bestScore) {
                    bestScore = score;
                    bestMatch = key;
                }
            }

            if (!bestMatch.isEmpty()) {
                const ItemData &data = itemDataMap[bestMatch];
                imagePath = data.imagePath;
                unitPrice = data.price;
                description = data.description;
            }

            imageLabel->clear();
            if (!imagePath.isEmpty()) {
                QPixmap pix;
                if (!pix.load(":/images/" + imagePath)) {
                    qDebug() << "Failed to load image:" << imagePath;
                } else {
                    imageLabel->setPixmap(pix.scaled(200, 200, Qt::KeepAspectRatio));
                }
            }

            descLabel->setText(description);
            QTableWidgetItem *unitPriceItem = new QTableWidgetItem(QString::number(unitPrice, 'f', 2));
            unitPriceItem->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->setItem(row, 4, unitPriceItem);

            double total = unitPrice * spinBox->value();
            QTableWidgetItem *totalItem = new QTableWidgetItem(QString::number(total, 'f', 2));
            totalItem->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->setItem(row, 5, totalItem);
            updateTotalCost();
        });
    }

    QTableWidgetItem *labelItem = new QTableWidgetItem("Total Cost:");
    labelItem->setFont(QFont("", -1, QFont::Bold));
    labelItem->setForeground(Qt::blue);
    labelItem->setTextAlignment(Qt::AlignCenter);
    labelItem->setBackground(Qt::yellow);
    ui->tableWidget->setSpan(totalRow, 0, 1, 5);
    ui->tableWidget->setItem(totalRow, 0, labelItem);

    QTableWidgetItem *totalCostItem = new QTableWidgetItem("0");
    totalCostItem->setTextAlignment(Qt::AlignCenter);
    totalCostItem->setBackground(Qt::yellow);
    ui->tableWidget->setItem(totalRow, 5, totalCostItem);
}

MainWindow::~MainWindow() {
    delete ui;
}
