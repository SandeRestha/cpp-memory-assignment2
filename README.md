# C++ Memory Management Assignment

This project demonstrates **manual memory management in C++** using raw pointers and heap allocation. The goal is to illustrate how C++ differs from modern languages like Rust and Java in how it handles memory allocation and deallocation.

## Objective

- Manually allocate memory on the heap using `new[]`
- Copy a C-style string into dynamically allocated memory using `strcpy`
- Pass a pointer to a function without transferring ownership
- Explicitly deallocate memory using `delete[]` to avoid memory leaks

## Key Concepts Demonstrated

- Manual dynamic memory allocation (`new[]`)
- Manual deallocation (`delete[]`)
- Risks of memory leaks when deallocation is omitted
- Use of raw C-style strings
- Comparison basis with automatic memory management in Rust and garbage-collected environments like Java

## Example Output
Message: Manual memory management in C++
End of main function

## Files

- `memory_assignment2.cpp` – Main C++ source file with comments
- `.vscode/` – Optional build/debug configuration for Visual Studio Code
- `.gitignore` – Excludes compiled artifacts

## How to Compile and Run

```bash
g++ memory_assignment2.cpp -o memory_assignment2
./memory_assignment2
