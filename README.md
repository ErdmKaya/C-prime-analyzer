# Prime Number Analysis Tool in C

## Description
This is a robust console-based tool written in C. It allows users to check if a number is prime and calculates the prime factorization for composite numbers using exponential notation.

I created this project to practice the following C programming concepts:
* `while` loops and control flow
* **Input Validation** (handling non-numeric inputs & buffer clearing)
* **Algorithmic Optimization** (using `O(sqrt(n))` for efficiency)
* Handling large integers with `long long` data types

## Installation & Compilation

Since this is a C source code, you must **compile** it before running.

### 1. Prerequisites
You need a C compiler installed on your system, such as **GCC** or **Clang**.
* To check if you have one, type `gcc --version` or `clang --version` in your terminal.

### 2. Compile & Run
Open your terminal in the project folder and run the following commands:

```bash
# Option A: Compile using GCC
gcc primeanalyzer.c -o primeanalyzer

# Option B: Compile using Clang
clang primeanalyzer.c -o primeanalyzer

# HOW TO RUN
# Windows:
primeanalyzer.exe

# Linux/macOS:
./primeanalyzer
```

#           EXAMPLE OUTPUT
# Enter a positive integer (0 to exit): 72
# >> 72 is NOT a prime number.
# >> Prime Factors: 2^3 x 3^2
#
# Enter a positive integer (0 to exit): 13
# >> 13 is a prime number.
