cmake_minimum_required(VERSION 3.29)
project(NocionesClave_BeatrizGarrido)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)

FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)

add_executable(NocionesClave_BeatrizGarrido
    proyecto1/main.cpp
        proyecto1/Persona.h
        proyecto1/Persona.cpp
        proyecto1/Estudiante.h
        proyecto1/Estudiante.cpp)

target_link_libraries(NocionesClave_BeatrizGarrido fmt::fmt)