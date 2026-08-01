# VAD9V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Negative Numbers

Listen

In C++, when you divide an `int` by another `int`, you get only the `integer value` of the quotient and the fractional part gets truncated.

- For example, 3 / 2 would be 1, and not 1.5.
- The fractional part 0.5 gets truncated/discarded.
### Task

Write a program which does the following:

- Display the sum, product, and quotient of 2 integers - $-50$ & $40$.
- Initialise the following variables in your program and use them in the computation Variable a and assign it the value $-50$ Variable b and assign it the value $40$ Variables sum, product and quotient - assign the relevant values to them Note - sum, product and quotient need to be integers
- Output sum, product and quotient to the console on separate lines

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-01T17:19:25.487Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = -50;
    int b = 40;
    // Update your code below this line
    int sum = a+b;
    int product = a*b;
    int quotient = a/b;
    
    cout << sum << endl << product << endl<<quotient;
 




  
  
}
```

---

[View on CodeChef](https://www.codechef.com/problems/VAD9V2)