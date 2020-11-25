cmake_minimum_required(VERSION 3.17)
project(PSOgui)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
SET(QT5_MODULES Widgets PrintSupport)
FIND_PACKAGE(Qt5 REQUIRED COMPONENTS ${QT5_MODULES})

add_executable(PSOgui main.cpp Function/Function.cpp Function/Function.h Structures.h Particle.cpp Particle.h Swarm.cpp Swarm.h qcustomplot/qcustomplot.cpp qcustomplot/qcustomplot.h mainwindow.cpp mainwindow.h Function/Ackley.cpp Function/Ackley.h Function/CrossInTray.cpp Function/CrossInTray.h Function/Griewank.cpp Function/Griewank.h Function/Sphere.cpp Function/Sphere.h Function/SixHumpCamel.cpp Function/SixHumpCamel.h Function/Easom.cpp Function/Easom.h Function/Michalewicz.cpp Function/Michalewicz.h Function/StyblinskiTang.cpp Function/StyblinskiTang.h Function/BukinN6.cpp Function/BukinN6.h Function/DropWave.cpp Function/DropWave.h Function/HolderTable.cpp Function/HolderTable.h Function/SchafferN4.cpp Function/SchafferN4.h Function/SchafferN2.cpp Function/SchafferN2.h Function/Levy.cpp Function/Levy.h Function/LevyN13.cpp Function/LevyN13.h)

target_link_libraries(PSOgui Qt5::Widgets Qt5::PrintSupport)