set(CMAKE_CXX_STANDARD 14)
project(untitled6)
find_package( Boost REQUIRED COMPONENTS program_options regex )
include_directories( ${Boost_INCLUDE_DIRS} )
cmake_minimum_required(VERSION 3.20)
find_package(Boost COMPONENTS system filesystem REQUIRED)
add_executable(untitled6 main.cpp)