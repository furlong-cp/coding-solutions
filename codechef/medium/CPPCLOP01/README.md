# CPPCLOP01

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Relational Operators

Listen

Relational operators help you compare two values or variables. They give you a result of either `1(true)` or `0(false)` based on the comparison.

#### Basic Comparison

Let's start with a simple example:

```
int height1 = 12;
int height2 = 14;
cout<<(height1 < height2); // Outputs 1(meaning true) because 12 is less than 14

```

In this example, the `<` operator compares `height1` and `height2`. Since `height1` is less than `height2`, it returns `1`.

 **Note:**  It is important to enclose the condition in brackets else C++ will throw an error.

#### Other Relational Operators

Here are some more examples of relational operators:

- a > b          (Checks if a is greater than b)
- a == b        (Checks if a is equal to b)
- a != b        (Checks if a is not equal to b)
- a >= b        (Checks if a is greater than or equal to b)
- a <= b        (Checks if a is less than or equal to b)
### Task

You are given two variables `height1` and `height2` - use relational operators to output $0$(false) if they are equal else output $1$(true).

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-01T18:43:11.019Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int height1 = 15;
    int height2 = 13;
    cout<<(height1 > height2);
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CPPCLOP01)