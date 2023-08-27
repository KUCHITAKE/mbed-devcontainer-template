cmake_minimum_required(VERSION 3.19.0)

set(MBED_PATH
    ${CMAKE_CURRENT_SOURCE_DIR}/mbed-os
    CACHE INTERNAL "")
set(MBED_CONFIG_PATH
    ${CMAKE_CURRENT_BINARY_DIR}
    CACHE INTERNAL "")

include(${MBED_PATH}/tools/cmake/app.cmake)

project({{cookiecutter.project_slug}})

add_subdirectory(${MBED_PATH})

add_executable({{cookiecutter.project_slug}})

target_include_directories({{cookiecutter.project_slug}} PRIVATE
)

target_sources({{cookiecutter.project_slug}} PRIVATE
  main.cpp
)

target_link_libraries({{cookiecutter.project_slug}} PRIVATE
  mbed-os 
)

mbed_set_post_build({{cookiecutter.project_slug}})

option(VERBOSE_BUILD "Have a verbose build process")
if(VERBOSE_BUILD)
  set(CMAKE_VERBOSE_MAKEFILE ON)
endif()