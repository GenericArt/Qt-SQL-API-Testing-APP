cmake_minimum_required(VERSION 3.23)
project(QtSQLApp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

#add_compile_options(-l sqlite3)

add_executable(QtSQLApp main.cpp Interface/interface.h Interface_Functions/interface_functions.cpp Interface_Functions/interface_functions.h Interface_Functions/api_funcs.cpp Interface_Functions/api_funcs.h Interface_Functions/sqlite_funcs.cpp Interface_Functions/sqlite_funcs.h)
target_link_libraries(QtSQLApp
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )


target_link_libraries(QtSQLApp sqlite3)
