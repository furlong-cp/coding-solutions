# LCPPCL308

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### MCQ - 1

How do you declare a pointer to an integer variable?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T13:59:50.609Z  

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers; // Pointer to the first element

    for (int i = 0; i < 5; i++) {
        cout << *ptr << endl;
        ptr++; // Move the pointer to the next element
    }

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL308)