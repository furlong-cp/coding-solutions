# Pyramid Pattern

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a number  **n**, print pyramid pattern with n lines.

 **Examples:** 

```
Input: n = 4 
Output:
    *
   ***
    *
   ***
```

```
Input: n = 5 
Output:
    *
   ***
    *
   ***
    *
```

 **Constraints:** 
1 ≤ n ≤ 100

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-11T13:40:41.395Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/pyramid-patterns/1)