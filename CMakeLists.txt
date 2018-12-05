cmake_minimum_required(VERSION 3.8)

project(cherry)

# Setting the C++ standard directly
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find threads package
find_package(Threads)

find_package(Boost)
if(Boost_FOUND)
	include_directories(${Boost_INCLUDE_DIRS})
	link_directories(${Boost_LIBRARY_DIRS})
endif(Boost_FOUND)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Idioms)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Templates)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Virtual)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Memory)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Threads)

file(GLOB_RECURSE SRC_IDIOMS "${CMAKE_CURRENT_SOURCE_DIR}/Idioms/*.*")
file(GLOB_RECURSE SRC_TEMPLATES "${CMAKE_CURRENT_SOURCE_DIR}/Templates/*.*")
file(GLOB_RECURSE SRC_VIRTUAL "${CMAKE_CURRENT_SOURCE_DIR}/Virtual/*.*")
file(GLOB_RECURSE SRC_MEMORY "${CMAKE_CURRENT_SOURCE_DIR}/Memory/*.*")
file(GLOB_RECURSE SRC_THREADS "${CMAKE_CURRENT_SOURCE_DIR}/Threads/*.*")

 # Add the executable
add_executable(cherry main.cpp ${SRC_IDIOMS} ${SRC_TEMPLATES} ${SRC_VIRTUAL} ${SRC_MEMORY} ${SRC_THREADS})

source_group("Idioms" FILES ${SRC_IDIOMS})
source_group("Templates" FILES ${SRC_TEMPLATES})
source_group("Virtual" FILES ${SRC_VIRTUAL})
source_group("Memory" FILES ${SRC_MEMORY})
source_group("Threads" FILES ${SRC_THREADS})

# Add link libraries
target_link_libraries(cherry LINK_PRIVATE ${CMAKE_THREAD_LIBS_INIT})

