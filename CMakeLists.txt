cmake_minimum_required(VERSION 3.8)

project(cherry)

# Setting the C++ standard directly
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Boost)
if(Boost_FOUND)
	include_directories(${Boost_INCLUDE_DIRS})
	link_directories(${Boost_LIBRARY_DIRS})
endif(Boost_FOUND)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Idioms)

file(GLOB_RECURSE SRC_IDIOMS "${CMAKE_CURRENT_SOURCE_DIR}/Idioms/*.*")

 # Add the executable
add_executable(cherry main.cpp ${SRC_IDIOMS})

source_group("Idioms" FILES ${SRC_IDIOMS})
