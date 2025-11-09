# C++ Learning Project

## Overview
This is an educational C++ project containing various learning materials, examples, and exercises. The project includes tutorials on C++ fundamentals, strings, vectors, statistics, and sorting algorithms.

## Project Structure
- **main.cpp**: Primary CLI application that displays command-line arguments
- **Materiales/**: Educational materials and examples organized by topic
  - 0.Ejemplos/: Basic C++ examples (minimal, hello, functions, etc.)
  - 1.Vectors & Strings/: Vector and string manipulation examples
  - 2.Estadistica/: Statistics library and tests
  - 6.Sorting/: Sorting algorithms for different data types
- **Recursos/**: PDF resources and course materials
- **build/**: Compiled binaries (auto-generated)

## Getting Started

### Running the Main Application
The project is configured to automatically build and run `main.cpp` using the Run button. This will:
1. Compile `main.cpp` using g++
2. Run the compiled executable

The main program demonstrates command-line argument handling. Without arguments, it displays "No arguments passed."

### Build Scripts
- **build.sh**: Compiles main.cpp into `build/main` with C++17 standard and warning flags (-Wall -Wextra)
- **clean.sh**: Removes all compiled binaries from the build directory

### Working with Examples
The `Materiales/` directory contains numerous C++ examples and exercises. To compile and run individual examples:

```bash
# Navigate to the example directory
cd Materiales/0.Ejemplos/6.hola/

# Use the makefile if available
make

# Or compile manually
g++ hola.cxx -o hola
./hola
```

## Project Setup

### Language & Environment
- **Language**: C++
- **Compiler**: g++ (via cpp-clang14)
- **Build System**: Shell scripts and makefiles
- **Environment**: Nix development environment (flake.nix)

### Recent Changes
- **November 9, 2025**: Initial Replit setup
  - Configured C++ compiler toolchain
  - Fixed build scripts to output to `build/` directory
  - Created console workflow for main application
  - Added .gitignore for C++ build artifacts
  - Created project documentation

## Development Tips
- The main build.sh uses C++17 standard with diagnostic flags (-Wall -Wextra) to help catch common errors
- Most examples in `Materiales/` have their own makefiles with specific compilation settings
- The project uses `.cxx` and `.cpp` file extensions interchangeably
- Some examples require specific compilation flags (check individual makefiles)
- Educational materials are available in Spanish (Recursos/ directory)
- To run main.cpp with arguments, modify the workflow command or run manually: `./build/main arg1 arg2`

## Architecture Notes
This is a CLI-based educational project with no web frontend or backend. Each subdirectory in `Materiales/` represents a standalone learning module that can be compiled and run independently.
