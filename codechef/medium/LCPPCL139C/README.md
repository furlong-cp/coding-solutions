# LCPPCL139C

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T09:41:09.458Z  

```c_cpp
#include<iostream>
using namespace std;

// Inline function to calculate (a + b)^2
inline int abSquared(int a, int b){
    int c = a*a + b*b + 2*a*b;
    return c;
}

int main(){
    int a, b;
    cin >> a >> b;
    int expression_value = abSquared(a, b);
    
    // Print the variable containing the result, not the function name
    cout << expression_value << endl;
    
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL139C)