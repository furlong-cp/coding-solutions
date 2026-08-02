# SYNMCQ32

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Multiple Choice Question

What will be the output of this code?

```
#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = -10;

    if (a >= b) {
        cout << "a is greater or equal to b. ";
    }
    if ((a == 0) || (b == 0)) {
        cout << "At least one is 0. ";
    }
    if ((a == 0) && (b == 0)) {
        cout << "Both are 0. "
    }
    cout << "Program ends";
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:35:36.226Z  

```cpp
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

[View on CodeChef](https://www.codechef.com/problems/SYNMCQ32)