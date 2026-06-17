cmake_minimum_required(VERSION 3.20)
project(Zero_Dependency_Edge_Inference_Engine)

set(CMAKE_CXX_STANDARD 20)

add_executable(
        Zero_Dependency_Edge_Inference_Engine
        src/main.cpp
        src/activation.cpp
        src/mlp.cpp
        src/matrix.cpp
)