# LCPPCL316

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Multiple choice question

What is the primary advantage of  **Call by Reference**  over  **Call by Value** ?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T17:03:08.812Z  

```cpp
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