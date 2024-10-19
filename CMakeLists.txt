cmake_minimum_required(VERSION 3.25)
project(Storage_model1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_executable(Storage_model main.cpp
        back/main_back.hpp
        back/class_prod.hpp
        back/database.hpp
        back/help_func.hpp
        front/App/App.cpp
        front/App/App.h
        front/ProductCard/ProductCard.cpp
        front/ProductCard/ProductCard.h)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

target_link_libraries(Storage_model
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

