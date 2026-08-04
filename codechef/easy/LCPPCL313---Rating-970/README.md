# LCPPCL313 - Rating 970

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Call by Reference

Listen

In  **call by reference**, a reference to the actual argument's memory location is passed to the function parameter.
This means that any changes made to the parameter within the function directly affect the original variable outside the function.

In C++, we can achieve Call by Reference in two ways:

 **Using References:**  We can pass arguments to functions by reference using reference variables. This allows the function to directly modify the original variables passed to it.

Example:

```
#include <iostream>
using namespace std;

void increment(int &x) {
    x++;
}

int main() {
    int num = 5;
    increment(num); // Call by reference
    cout << "num after function call: " << num << endl; // Output: num after function call: 6
    return 0;
}

```

 **Using Pointers:**  We can also achieve Call by Reference by passing arguments as pointers. This allows the function to access and modify the original variables through pointers.

Example:

```
#include <iostream>
using namespace std;

void increment(int *x) {
    (*x)++;
}

int main() {
    int num = 5;
    increment(&num); // Call by reference using pointers
    cout << "num after function call: " << num << endl; // Output: num after function call: 6
    return 0;
}

```

Both methods achieve Call by Reference, but using references is often preferred in modern C++ programming as it provides cleaner syntax and better readability.

 *Check out the code in the IDE to understand this better.*

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T17:00:07.181Z  

```c_cpp
#include <iostream>
using namespace std;

void increment(int *x) {
    (*x)++;
    cout << "new value during function: " << *x << endl;
}

int main() {
    int num = 5;
    increment(&num);
    cout << "num after function call: " << num << endl; // Output: num after function call: 6
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL313)