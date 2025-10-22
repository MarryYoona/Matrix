# MatrixOps

A lightweight C-based tool for square matrix operations.

## Core Features

*   Addition of multiple N×N matrices
*   Determinant calculation for N×N matrices (recursive cofactor expansion)

## Dependencies

*   C compiler (GCC, Clang, or MSVC)
*   Standard C libraries (stdlib.h, stdio.h, math.h)

## Build & Run

gcc main.c matrix.c -o matrixops -lm  # Compile
./matrixops                            # Execute (Linux/macOS)
matrixops.exe                          # Execute (Windows)

## Usage

*   Select mode: `1` for addition, `2` for determinant
*   Input matrix order (N) and relevant parameters
*   Provide matrix elements row-wise (space-separated)
*   View output results

## Notes

*   Only supports square matrices (N×N)
*   High-order matrices (N>10) may have performance issues
*   Input must be numeric (integers/floats)
