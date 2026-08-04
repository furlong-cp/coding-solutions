# LCPPCL313B - Rating 970

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Returning Pointer from function

Listen

In addition to passing a pointer to a function, we can also return a pointer from a function:

```
#include <iostream>
using namespace std;
// Function to find the maximum of two numbers
int* get_max(int &a, int &b) {
    return a > b ? &a : &b;
}
int main() {
    int a = 3, b = 4;
    int* maximum = get_max(a, b);
    cout << *maximum; // prints 4

    return 0;
}

```

### Task
- Complete the given function which takes three integer parameters and return the pointer to maximum among them, and finally print the largest value in main function.
### Sample 1:
Input
Output

```
3 4 5
```

```
5
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T17:02:08.947Z  

```c_cpp
#include <iostream>
using namespace std;

// Function to return a pointer to the largest of three integers
int* findLargest(int &a, int &b, int &c) {
    // Find the largest number among a, b, and c
    if (a >= b && a >= c) {
        return &a;  // Return a pointer to a if it is the largest
    } else if (b >= a && b >= c) {
        return &b;  // Return a pointer to b if it is the largest
    } else {
        return &c;  // Return a pointer to c if it is the largest
    }
}

int main() {
    int num1, num2, num3;

    // Enter three integers
    cin >> num1 >> num2 >> num3;

    // Call the findLargest function and get the pointer to the largest number
    int* largestPtr = findLargest(num1, num2, num3);

    // Print the value of the largest number using the pointer
    cout << *largestPtr;

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL313B)