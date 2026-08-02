# PPSC88VE

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T08:51:21.308Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    while (n > 0) {
        //Write statement to count the digit
        n /=10;

        //Write statement to update n
        count++;
    }
    cout << count << endl;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/PPSC88VE)