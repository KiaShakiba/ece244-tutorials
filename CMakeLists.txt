cmake_minimum_required(VERSION 3.12)

project(ece244)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB CPP_FILES ${PROJECT_SOURCE_DIR}/lib/*.cpp)

add_executable(${PROJECT_NAME} main.cpp ${CPP_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
