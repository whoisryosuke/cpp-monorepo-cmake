# Set C++ version to 20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Create an executable for your project
add_executable(${NAME} main.cpp)

# Include sub-projects (allows importing of header/cpp files)
# target_include_directories(${PROJECT_NAME} PUBLIC
#                           "../core"
#                           )
target_link_libraries(${NAME} Core) 