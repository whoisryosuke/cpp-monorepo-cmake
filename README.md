# C++ Monorepo Example

This is a C++ app that includes local libraries.

The library is located at `/core/`, any `.cpp` files added there will be exposed.

The main entry point is `/my-project/main.cpp` - that becomes `my-project.exe`. You can import the library code here.

## Getting Started

1. Create a `build` folder and navigate inside.
2. Generate a native build system for the project: `cmake ../`
   - This will default to whatever build system you have installed, like Visual Studio.
   - You could also run `cmake ../ -A x64` and get a Visual Studio solution
3. Now you can run the build: `cmake --build .`
   - You could also open the `.sln` file and run `Build Solution` for the same result.
4. Your `.exe` should be available in `build\Debug\`

## How it works

This project uses CMake to scaffold project files for build compilers (like Visual Studio Solution files).

There's a primary CMake file in the root that creates "monorepo" project that contains all our code.

Then each project, the main one and any included libraries, each have their own folder and CMake file.

The main project creates an executable (`add_executable()`), while the "sub-projects" create libraries (`add_library()`).

## Adding a new library

1. Create a new folder.
1. Copy the CMake file from `/core/CMakeLists.txt`
1. Rename the library: `add_library(NewName ${SRC_FILES})`
1. Open the root CMake file.
1. Add your new subdirectory: `add_subdirectory ("new-folder-name")`
1. Open the main project CMake file: `/my-project/CMakeLists.txt`
1. Add the new library: `target_link_libraries(${NAME} NewName)`
