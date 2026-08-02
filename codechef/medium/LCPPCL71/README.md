# LCPPCL71

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Else If Statement

Listen

The `'else if'` keyword means "if the previous conditions were not true, then try this condition"

### Task

Write a program which does the following:

- Create integer variables r and b - the marks scored by Bob and Rob.
- Take input in r and then b.
- Compute and output the following to the console. "Rob Scored higher marks than Bob" if r is greater than b. "Bob & Rob both scored the same" if both b and r are equal.

### Sample 1:
Input
Output

```
15 15
```

```
Bob & Rob both scored the same
```

### Sample 2:
Input
Output

```
45 23
```

```
Rob Scored higher marks than Bob
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:24:23.840Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int r;
  int b;
  cin >> r >> b;
  if (r>b) {
    cout << "Rob Scored higher marks than Bob" << endl;
  } else if (b==r) {
    cout << "Bob & Rob both scored the same" << endl;
  }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL71)