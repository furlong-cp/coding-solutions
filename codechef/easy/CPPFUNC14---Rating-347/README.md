# CPPFUNC14 - Rating 347

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T16:47:14.282Z  

```c_cpp
#include <iostream>

using namespace std;

int square(int t) {
    int value1 = t * t;
    return value1;
}

int half(int i) {
    int value2 = i / 2;
    return value2;
}

int main() {
    int n;
    cin >> n;
    
    int result1 = square(n);
    int result2 = half(result1);
    
    cout << result2 << endl;
    
    
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CPPFUNC14)