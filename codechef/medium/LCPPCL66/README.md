# LCPPCL66

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Table of Any Number

Listen

Write a program to print the multiplication table of any number given by a user upto 10.

### Sample 1:
Input
Output

```
4
```

```
4 x 1 = 4
4 x 2 = 8
4 x 3 = 12
4 x 4 = 16
4 x 5 = 20
4 x 6 = 24
4 x 7 = 28
4 x 8 = 32
4 x 9 = 36
4 x 10 = 40
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:20:01.650Z  

```c_cpp
// Remove the __ and complete the code
#include <bits/stdc++.h>
using namespace std;

int main() {

  int num;
  cin >> num;
  for (int i=1;i<=10;i++){
    cout << num << " x "<<i<<" = " << num * i << endl;
  
}
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL66)