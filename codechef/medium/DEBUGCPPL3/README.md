# DEBUGCPPL3

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Compilation error continued

Listen

How do you identify the 'Compilation error'?

When you click on `Run` or `Submit` - you will get the error description below it.
For example - in the example below - we are being told by the system that there is an error on `Line 7`.
The nature of the error is that a `;` was expected.

```
Status :Compilation error

sol.cpp: In function ‘int main()’:
sol.cpp:7:17: error: expected ‘;’ before ‘return’
    7 |   cout << Number       //Output the variable to the console
      |                 ^
      |                 ;
    8 | 
    9 |   
      |   ~~~~~~         

```

### Task
- Submit the code present in IDE as it is.
- Read the error statement and understand what needs to be fixed.
- Fix the code so that it correctly outputs the multiplication of a and b

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:44:08.764Z  

```c_cpp
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 3;
    cout << a * b;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/DEBUGCPPL3)