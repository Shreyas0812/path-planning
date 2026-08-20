cmake_minimum_required(VERSION 3.16)

project(path_planning LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(grid_based
    grid-based/headers/path_planner.hpp
    grid-based/src/bfs.cpp
)

target_include_directories(grid_based
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/grid-based/headers
)

add_executable(app app/main.cpp)

target_link_libraries(app PRIVATE grid_based)