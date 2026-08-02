# LCPPCL78

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Conditions in if statements

Listen

C++ supports the usual logical mathematical conditions:

- Equals: a == b
- Not Equals: a != b
- Less than: a < b
- Less than or equal to: a <= b
- Greater than: a > b
- Greater than or equal to: a >= b
### Task

Write a program which does the following

- Take input from the console for integer variables a and b.
- Compute and output the following "Bravo!" if a is greater or equal to b Otherwise print "Try again" in every other case
### Sample 1:
Input
Output

```
25 52
```

```
Try Again
```

### Sample 2:
Input
Output

```
35 34
```

```
Bravo!
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:32:26.962Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int a;
  int b;
  cin >> a;
  cin >> b;
  if (a >= b) {
    cout << "Bravo!" << endl;
  } 
  else {
    cout << "Try Again" << endl;
  }

  
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL78)