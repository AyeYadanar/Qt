# ROM ROBOTICS - Robotics Calculator

A desktop application built with **Qt** and **C++** using **CMake**. This tool helps robotics developers perform common calculations like **RPM**, **Velocity**, **Distance**, and **PID** tuning through a graphical interface.

---

## 🚀 Features

- 🌀 **RPM Calculator**
- 💨 **Velocity Calculator**
- 📏 **Distance Calculator**
- 🎯 **PID Controller Calculator**
- Color-themed interactive buttons
- Modular dialog design with separate windows for each tool

---

## 🖼 GUI Overview

* Main window displays company and project name.
* Four push buttons for each calculator with hover effects.
* Each button opens a corresponding dialog and hides the main window.

---

## 🧩 Project Structure

         RoboticsCalculator/

    ├── CMakeLists.txt
    ├── main.cpp
    ├── mainwindow/
    │   ├── mainwindow.h
    │   ├── mainwindow.cpp
    │   └── mainwindow.ui
    ├── dialog/
    │   ├── dialog.h
    │   ├── dialog.cpp
    │   └── dialog.ui
    ├── secdialog/
    │   ├── secdialog.h
    │   ├── secdialog.cpp
    │   └── secdialog.ui
    ├── thirddialog/
    │   ├── thirddialog.h
    │   ├── thirddialog.cpp
    │   └── thirddialog.ui
    ├── pid/
    │   ├── pid.h
    │   ├── pid.cpp
    │   └── pid.ui
    ├── variable/
    │   └── variable.h
    ├── resources/
    │   └── images.qrc
    └── README.md

---

## ⚙️ Build Instructions (Using CMake)

### Prerequisites

- **Qt 5 or 6** installed (with `qmake` and development libraries)
- **CMake** (≥ 3.14 recommended)
- A **C++ compiler** (GCC, Clang, MSVC, etc.)

### Build Steps

bash
# 1. Clone the repository
```bash 
git clone https://github.com/yourusername/RoboticsCalculator.git
cd RoboticsCalculator
```
# 2. Create build directory
```bash
mkdir build && cd build
```
# 3. Configure the project with CMake
```bash
cmake ..
```
# 4. Build the project
```bash
make
```
# 5. Run the application
```bash
./RoboticsCalculator
```
## 🔧 Example CMakeLists.txt
> Here’s a basic example for your project:

        cmake_minimum_required(VERSION 3.14)

        project(RoboticsCalculator LANGUAGES CXX)

        set(CMAKE_CXX_STANDARD 17)
        set(CMAKE_AUTOMOC ON)
        set(CMAKE_AUTORCC ON)
        set(CMAKE_AUTOUIC ON)

        find_package(Qt5 COMPONENTS Widgets REQUIRED)

        add_executable(${PROJECT_NAME}
            main.cpp
            mainwindow.cpp
            mainwindow.h
            dialog.cpp
            dialog.h
            secdialog.cpp
            secdialog.h
            thirddialog.cpp
            thirddialog.h
            pid.cpp
            pid.h
            resources.qrc
        )

        target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
## 🎨 Styling & UX

* Labels and buttons are styled using QStyleSheet.

* Buttons change color on hover:

    * RPM: Green

    * Velocity: Purple

    * Distance: Blue

    * PID: Red
