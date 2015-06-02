cmake_minimum_required( VERSION 2.8.12 )

project( LibBug )
include_directories( ${LibBug_SOURCE_DIR} ${LibBug_BINARY_DIR} )

add_subdirectory(LibFooDependingOnBar)
add_subdirectory(LibBar)
