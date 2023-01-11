# Set C++ version to 20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find all CPP and Header files in this folder
file(GLOB SRC_FILES *.cpp *.h)

# Create a library named "Core" using the files we globbed
add_library(Core ${SRC_FILES})
