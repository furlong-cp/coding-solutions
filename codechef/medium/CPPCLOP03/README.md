# CPPCLOP03

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Multiple choice question

What will be the value of x after the following statement?

```
int x = 7;
x *= 3;
cout << x;

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-01T18:36:57.305Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int length = 11;
  // Update your code below this line
  length %=3;
  cout << length;
  
  
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CPPCLOP03)