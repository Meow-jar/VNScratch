cmake_minimum_required(VERSION 3.20)
project(vnscratch LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SFML REQUIRED COMPONENTS System Window Graphics Audio Network)

add_executable(vnscratch
    src/main.cpp
    src/Draw/Draw.cpp
    src/Engine/Engine.cpp
    src/AssetManager/assetManager.cpp
)

target_include_directories(vnscratch PRIVATE include)

#target_compile_options(vnscratch)

target_link_libraries(vnscratch PRIVATE
    SFML::System
    SFML::Window
    SFML::Graphics
    SFML::Audio
    SFML::Network
)

