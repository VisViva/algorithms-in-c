cmake_minimum_required(VERSION 2.8.9)
project (main)

# Include headers
include_directories(src)

# Include sources
file(GLOB SOURCES
	"src/*.c"
	"src/fundamental/*.c"
)

add_executable(main ${SOURCES})