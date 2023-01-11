# Set C++ version to 20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Create an executable for your project
add_executable(${NAME} main.cpp)

# Include library headers
# People recommend putting the files in the executable, 
# but it becomes terse globbing for each sub-module
include_directories("${PROJECT_SOURCE_DIR}/core")

# Link libraries. 
# This imports the library file we build for each sub-module.
target_link_libraries(${NAME} Core)