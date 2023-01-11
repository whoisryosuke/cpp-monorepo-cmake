# Could be lower - like 3.1 if needed.
cmake_minimum_required (VERSION 3.8)

# Set a variable with the project name
set(NAME MyProject)

# Use the variable as needed
project(${NAME})

# Include the main app + sub-modules
add_subdirectory ("my-project")
add_subdirectory ("core")