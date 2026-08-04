# PPSC148 - Rating 970

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Factorial using Pointer

Listen

You are given an integer $N$.
Update the function given in the IDE and use pointers to output the factorial of integer $N$.

### Sample 1:
Input
Output

```
5
```

```
120
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T17:05:49.083Z  

```c_cpp
#include <iostream>
using namespace std;

void calculateFactorial(int *numPtr) {
    int result = 1;
    for (int i = 1; i <= *numPtr; ++i) {
        result *= i;
    }
    *numPtr = result;
}

int main() {
    int number;
    cin >> number;

    calculateFactorial(&number); // Pass the address of 'number' to the function

    cout << number << endl;

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/PPSC148)