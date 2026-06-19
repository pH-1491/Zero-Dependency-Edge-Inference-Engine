cmake_minimum_required(VERSION 3.10)

project(Zero_Dependency_Edge_Inference_Engine)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(
        Zero_Dependency_Edge_Inference_Engine
        src/main.cpp
        src/matrix.cpp
        src/activations.cpp
        src/dense_layer.cpp
        src/memory_pool.cpp
        src/tcp_server.cpp
)