# CPPCLOP08E

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Logical Operators

Listen

Logical operators help you combine multiple conditions to check if they are True or False. They are often used to make decisions based on multiple criteria.

#### Basic Logical Operations

Here are the basic logical operators and their usage:

- &&   (Logical AND: returns 1(true) only if both conditions are true) (a > 5 && a < 10) // returns 1 only if a is greater than 5 but less than 10
- ||  (Logical OR: returns 1 if at least one condition is True) (a > 10 || a < 5) // returns 1 if a is greater than 10 or less than 5
- !   (Logical NOT: reverses the result of the condition) (!(a > 5)) // returns 1 if (a > 5) results to False, returns 0(false) if (a > 5) results to True
### Task

You are given a variable  **`height`**.
You are allowed to enter the waterpark only if your height is strictly greater than $5$ and strictly less then $10$.
Apply the condition and output  **1**  if  **height**  is eligible to enter the waterpark else  **0**.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-01T18:46:23.167Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int height = 15;
    
    cout<<(height >5 && height<10);
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CPPCLOP08E)