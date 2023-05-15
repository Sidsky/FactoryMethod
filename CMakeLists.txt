cmake_minimum_required(VERSION 3.21)
project(FactoryMethod)

set(CMAKE_CXX_STANDARD 14)

add_executable(FactoryMethod main.cpp HotDrink.h HotDrinkFactory.h DrinkFactory.h)
