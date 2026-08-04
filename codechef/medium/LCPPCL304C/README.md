# LCPPCL304C

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### NULL Pointer

Listen

In C++, a null pointer is a special pointer value that indicates that the pointer is not pointing to any valid memory location. It is typically represented by the constant value  **`nullptr`**  or  **`NULL`**  and is used to signify that the pointer is not intended to point to any valid entity.

Here are some key points about null pointers in C++:

- nullptr: In C++, the keyword nullptr or NULL is used to represent a null pointer.
- Pointer Initialization: You can initialize a pointer to be a null pointer by assigning it the value nullptr. For example: int *ptr = nullptr; // ptr is now a null pointer
- Checking for Null Pointers: Before dereferencing a pointer, it's important to check if it's a null pointer to avoid runtime errors (such as segmentation faults). This can be done using an if statement or by directly checking the pointer value. int  *ptr = nullptr; if (ptr != nullptr) { // Pointer is not null, safe to dereference* ptr = 10; }
- Pointer Arithmetic: Null pointers can participate in pointer arithmetic, but attempting to dereference a null pointer results in undefined behavior. It's crucial to ensure that a pointer is not null before attempting to dereference it. int *ptr = nullptr; ptr++; // Valid, but ptr is still a null pointer
- Default Initialization: If a pointer is declared without initialization, it will have an indeterminate value, which is not guaranteed to be a null pointer. It's good practice to initialize pointers explicitly to nullptr if they are not immediately assigned valid memory addresses.
- Comparisons: Null pointers can be compared with other pointers or with integer constants like 0. For example: int *ptr = nullptr; if (ptr == nullptr) { // ptr is a null pointer }
### Task
- Complete the code given in IDE so that it prints Pointer is null.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T13:59:06.614Z  

```c_cpp
// Complete the code

#include <iostream>
using namespace std;

void printValue(int *ptr) {
    if(ptr != nullptr) {
        cout << "Value: " << *ptr << endl;
    } else {
        cout << "Pointer is null" << endl;
        
    }
}

int main() {
    int *number = nullptr; // Pointer is null initially
    printValue(number); // This should print the value pointed to by the pointer
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL304C)