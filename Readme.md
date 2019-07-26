# Template.CMake.Cpp
Basic structure for a CMake project written in C++. It's composed of 3 major layers: data layer, business layer and the presentation layer.

## Abbreviations
* <b>Cmps</b> - CMake project structure 

## Run
> You need CMake 3.10+ to be installed before you can run the application.

> You need a C++17 compiler before you can run the application.

> For current project, the [LLVM Compiler Infrastructure](http://llvm.org/) was used.

1. Go to the root folder of you app.
2. Create `cmake-build-debug` folder:
    * `mkdir cmake-build-debug`
2. Go inside the new created folder:
    * `cd cmake-build-debug`
3. Generate the make files:
    * `cmake ..`
4. Build the project:
    * `cmake --build .`
5. The binaries can be found here: 
    * `Tmplate.CMake.Cpp/cmake-build-debug/bin`