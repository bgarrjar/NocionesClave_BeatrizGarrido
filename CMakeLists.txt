cmake_minimum_required(VERSION 3.29)
project(NocionesClave_BeatrizGarrido)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
include_directories(proyecto2)

add_library(matematicas STATIC proyecto2/matematicas.cpp
        )
add_library(matematicas2 SHARED proyecto2/matematicas.cpp
        )

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
        proyecto1/Estudiante.cpp
        )

add_executable(NocionesClave_BeatrizGarrido2
        proyecto2/funciones.h
        proyecto2/funciones.h
        proyecto2/funciones.cpp
        proyecto2/main2.cpp
        proyecto2/matematicas.h
        proyecto2/matematicas.cpp
        )

target_link_libraries(NocionesClave_BeatrizGarrido fmt::fmt)
target_link_libraries(NocionesClave_BeatrizGarrido2 fmt::fmt)
target_link_libraries(NocionesClave_BeatrizGarrido2 matematicas)
target_link_libraries(NocionesClave_BeatrizGarrido2 matematicas2)