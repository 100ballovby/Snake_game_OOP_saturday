cmake_minimum_required(VERSION 3.24)
project(Snake_game_OOP_saturday)

set(CMAKE_CXX_STANDARD 17)

add_executable(Snake_game_OOP_saturday main.cpp include/Food.h src/Food.cpp src/Snake.cpp)
