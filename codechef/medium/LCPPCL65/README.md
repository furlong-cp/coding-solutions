# LCPPCL65

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Mile to Kilometer Convertor

Listen

Write a program to create a `Convertor` that approximately converts miles into kilometers.(1 Mile = 1.60 KM)

#### Steps:
- Create integer variables mile and km
- Accept user input and assign it to mile
- Compute the distance in kilometres (rounded down to nearest whole number) and print it.
### Sample 1:
Input
Output

```
106
```

```
169 Kilometers

```

### Sample 2:
Input
Output

```
42
```

```
67 Kilometers
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:18:12.004Z  

```c_cpp
// Complete the code below
#include <bits/stdc++.h>
using namespace std;

int main() {

  int mile;
  int km;
  cin >> mile;
  km = 1.60 * mile;
  cout << km;
  cout << " Kilometers"; 
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL65)