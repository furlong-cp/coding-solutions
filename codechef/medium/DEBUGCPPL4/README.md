# DEBUGCPPL4

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Mismatched Parenthesis

Listen

There should be one closing bracket for each opening bracket and the closing bracket should also be of the same type, like (),{},[]

If we try to use different opening and closing brackets, it can give you a syntax error.

```
int a  = (5+7 } ;     // incorrect due to the usage of mismatched parenthesis

```

### Task

We are given a program to check whether a number is odd or even.
Debug the code to solve the problem.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:44:39.074Z  

```c_cpp
// Debug the code to solve this problem

#include <iostream>
using namespace std;

int main()
{
    int n;
    n = 5;
    if (n % 2 == 1)
    {
        cout << "Odd";
    }
    else
    {
        cout << "Even";
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/DEBUGCPPL4)