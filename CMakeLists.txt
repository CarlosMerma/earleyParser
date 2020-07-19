cmake_minimum_required(VERSION 3.15)

project(ep)

file(GLOB SOURCES "src/*", "src/clases/*")

add_executable(ep ${SOURCES})
