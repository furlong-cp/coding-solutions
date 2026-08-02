# DEBUGCPPL7

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Logical Error or Wrong Answer (WA)

Listen

A logical error is an error in a program that occurs when the code compiles and runs without producing any error messages, but it does not produce the expected or desired output.
Instead, it performs a different computation or provides incorrect results due to a flaw in the algorithm or logic of the program.
Logical errors are the hardest to find in a program.

Based on what you have learnt so far - you will encounter logical errors of the following types:

- Incorrect Conditions
- Incorrect Index
- Incorrect variable usage

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:46:24.872Z  

```cpp
//uncomment the if condition
#include <iostream>

using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    
     if(b==0) {
       cout<<"infinity\n";
     }
    else {
        cout<<a/b<<"\n";
     }
    
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DEBUGCPPL7)