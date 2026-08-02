# LCPPCL82

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Or Statement

Listen

'||' can be used to insert the 'or' condition in a C++ code.

### Task

Write a program which does the following

- Take input from the console for integer variables z, x and c.
- Compute and output the following for each tuple z, x and c "PASS" if c is greater than either x or z Otherwise print "FAIL" in every other case
### Sample 1:
Input
Output

```
5 3 2
```

```
FAIL
```

### Sample 2:
Input
Output

```
3 5 8
```

```
PASS
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:34:43.098Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int z;
  int x;
  int c;
  cin >> z >>x>>c;
  if (c > x || c > z ) {
    cout << "PASS" << endl;
  } 
  else {
    cout << "FAIL" << endl;
  }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL82)