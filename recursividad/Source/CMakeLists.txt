# Generated by Magnet v0.5.0

# Do not edit the following since any changes will be overwritten next time the project files are regenerated.
# You can insert custom CMake code at the bottom of this file.

cmake_minimum_required(VERSION 3.20)
project(recursividad)
set(CMAKE_CXX_STANDARD 17)
add_executable(recursividad PCH.h main.cpp)

# Set rpath relative to app
if(NOT MSVC)
	set_target_properties(recursividad PROPERTIES LINK_FLAGS "-Wl,-rpath,./")
else()
	set_target_properties(recursividad PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/${PROJECT_NAME}/Binaries/Debug)
endif()

target_precompile_headers(${PROJECT_NAME} PUBLIC PCH.h)


# Insert your own CMake commands after this line.
