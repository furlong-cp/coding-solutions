# LCPPCL316 - Rating 970

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T17:02:50.438Z  

```c_cpp
#include <iostream>
using namespace std;

// Function to find the maximum and minimum of three integers
void findMaxMin(int &a, int &b, int &c, int &max, int &min) {
    max = min = a;
    
    if (b > max) max = b;
    if (c > max) max = c;

    if (b < min) min = b;
    if (c < min) min = c;
}

int main() {
    int num1, num2, num3;
    int max, min;

    // Read three integer values from the user
    cin >> num1 >> num2 >> num3;

    // Call the function to find the maximum and minimum
    findMaxMin(num1, num2, num3, max, min);

    // Print the maximum and minimum values
    cout << min << endl;
    cout << max << endl;

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL316)