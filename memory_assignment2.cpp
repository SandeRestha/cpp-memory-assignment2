#include <iostream>
#include <cstring>  // Provides strcpy for copying C-style strings

using namespace std;

// Function that receives a constant character pointer and prints the message
void printMessage(const char* msg) {
    cout << "Message: " << msg << endl;
}

int main() {
    // Manually allocate memory on the heap for 30 characters (including null terminator)
    // This memory is not managed automatically — programmer is responsible for deallocation
    char* message = new char[30];

    // Copy a C-style string into the manually allocated memory
    // strcpy does not perform bounds checking — risk of buffer overflow if input exceeds allocation
    strcpy(message, "Hello!, this is manual memory management in C++");

    // Pass the raw pointer to a function without transferring ownership
    printMessage(message);

    // If this line is omitted, a memory leak will occur
    // This explicitly frees the heap-allocated memory
    delete[] message;

    // Program ends with clean memory state
    cout << "End of main function" << endl;
    return 0;
}
