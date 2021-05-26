cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(
  "-Wall" "-Wpedantic" "-Wextra" "-fexceptions"
  "-Weffc++" "-Wsign-conversion" "-Werror"
  "$<$<CONFIG:DEBUG>:-O0;-g3;-ggdb>"
)

set(PROJ_NAME "CoCo")

project(${PROJ_NAME} VERSION 0.0.0)

configure_file(./cpp/CoCoConfig.h.in ../cpp/CoCoConfig.h)
include_directories(${PROJ_NAME} PUBLIC ${PROJECT_BINARY_BIN})

add_executable(${PROJ_NAME} ./cpp/main.cpp)
