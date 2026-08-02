# LCPPCL81

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### And Statement

Listen

The  **&&**  keyword is a logical operator, which is used to combine conditional statements.

### Task

Write a program which does the following:

- Declare a variables a and take it as input
- Compute if a is divisible by both 7 and 5
- Depending on the result above - output the following to the console The number is divisible by both 5 & 7 OR The number is not divisible by both 5 & 7
### Sample 1:
Input
Output

```
15
```

```
The number is not divisible by both 5 & 7
```

### Sample 2:
Input
Output

```
35
```

```
The number is divisible by both 5 & 7
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:33:59.036Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {

    int a;
    cin>>a;
    if (a % 7 == 0 && a % 5 == 0) {
        cout << "The number is divisible by both 5 & 7" << endl;
    }
    else {
        cout << "The number is not divisible by both 5 & 7" << endl;
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL81)