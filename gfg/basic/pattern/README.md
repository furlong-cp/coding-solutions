# Diamond Shape Pattern

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a number  **n**, print a diamond-shaped star pattern with 2n rows, where the number of stars first increases and then decreases to form the diamond.

 **Examples:** 

```
Input: n = 5
Output:

```

```
Input: n = 3
Output:
  *
  ** 
 **  *
 **  *
  ** 
  *
```

**Constraints:
**1 ≤ n ≤ 100

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-27T03:01:03.338Z  

```cpp
#include <bits/stdc++.h>
 using namespace std;

 int main() {
     int n;
     cin >> n;

     for (int i = 1; i <= n; i++) {
         for (int j = 1; j <= n - i; j++)
             cout << " ";
         for (int j = 1; j <= i; j++)
             cout << "* ";
         cout << "\n";
     }

     for (int i = n; i >= 1; i--) {
         for (int j = 1; j <= n - i; j++)
             cout << " ";
         for (int j = 1; j <= i; j++)
             cout << "* ";
         cout << "\n";
     }
 }
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/pattern/1)