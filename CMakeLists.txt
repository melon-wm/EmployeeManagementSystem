cmake_minimum_required(VERSION 3.23)
project(EmployeeManagementSystem)

set(CMAKE_CXX_STANDARD 14)

add_executable(EmployeeManagementSystem main.cpp workerManager.cpp workerManager.h employee.h Worker.h employee.cpp)
