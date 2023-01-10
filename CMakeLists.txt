cmake_minimum_required (VERSION 3.8)

# Set a variable with the project name
set(NAME MyProject)

# Use the variable as needed
project(${NAME})

# Include sub-projects.
add_subdirectory ("my-project")
add_subdirectory ("core")