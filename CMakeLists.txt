

cmake_minimum_required(VERSION 3.16.0)

project(zip VERSION 0.1.0)

list(APPEND CMAKE_PREFIX_PATH "${CMAKE_CURRENT_SOURCE_DIR}")

find_package(nlohmann_json 3.2.0 REQUIRED)
find_package(libzip REQUIRED)

set(SRC_FILES src/main.cpp
    src/json_reader.cpp
    src/domain.cpp
    src/zip_builder.cpp
    )

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_compile_options(${PROJECT_NAME} PRIVATE -std=c++17)
target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json::nlohmann_json)
target_link_libraries(${PROJECT_NAME} PRIVATE libzip::zip)
