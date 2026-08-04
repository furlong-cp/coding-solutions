# CPPFUNC10

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Some useful math functions

Listen

Below are some simple math functions that you will find useful while solving problems:

- $abs(A - B)$ - Necessarily returns the absolute value of $(A - B)$
- $A$ % $B$ - Returns the remainder when $A$ is divided by $B$
- To round a number $X$ upwards to its nearest integer, use the $ceil(X)$ function.
- To round a number $X$ downwards to its nearest integer, use the $floor(X)$ function.
- To get the value of $X$ to the power of $Y$, use the $pow(X,Y)$ function.

Proceed to the IDE to test out the syntax.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T10:01:32.204Z  

```c_cpp
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double X = 53.56;
    double Y = 3;
    int A = 45;
    int B = 20;
   
    // Output the absolute value of the difference of A and B
    cout << abs(A - B) << "\n";

    // Output the remainder when A is divided by B
    cout << A % B << "\n";

    //computing the rounded off number upwards to its nearest integer and printing it
    cout << ceil(X) << "\n";
   
    //computing the rounded off number downwards to its nearest integer and printing it
    cout << floor(X) << "\n";

    //computing the value of X to the power of Y and printing it
    cout << pow(X,Y) << "\n";

    
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CPPFUNC10)