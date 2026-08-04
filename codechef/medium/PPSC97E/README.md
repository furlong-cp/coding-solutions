# PPSC97E

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Nested loops

Listen

We learned about `For and While` loops.

Let's discuss `Nested` loops.

Nested loops are a powerful programming construct where one loop is placed inside another loop.

Let us understand this through an example - by printing a `Right Triangle`.
Suppose you want to print a right triangle of height `n`, where `n` is the number of rows.

Review the code in the IDE and click on 'Submit' to see the result.

In this example:

- The outer loop controls the number of rows.
- The inner loop controls the number of stars printed in each row, forming the right triangle pattern.
### Sample 1:
Input
Output

```
4
```

```
*
 ** 
 **  *
 **   ** 
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T08:33:36.564Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/PPSC97E)