# LCPPCL121

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Factorial of any number

Listen

Write a program that does the following

- Declare an integer variable num and initialise it to a user defined input
- Output to the console the factorial of num Remember to use loops for this problem Factorial of a number n is the product of all the numbers from 1 to n Factorial of a number(n) = n  *(n-1)* ... 2 * 1
### Sample 1:
Input
Output

```
6
```

```
The factorial of the given number is: 720

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T08:14:53.686Z  

```c_cpp
// Remove the underscores and complete the code
#include <bits/stdc++.h>
using namespace std;
int main() {

    int num;
    int fact = 1;
    cin >> num;
    for(int a = 1; a <= num; a++) {
        fact = fact * a;
    }
    
    cout << "The factorial of the given number is: " << fact << endl;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL121)