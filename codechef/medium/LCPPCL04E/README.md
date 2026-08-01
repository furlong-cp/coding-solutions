# LCPPCL04E

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Understanding integer to boolean conversion

Listen

In the previous problem we observed how an integer $156$ when converted to boolean gave true.

Let's understand how the boolean value is determined when converted from an integer.

To understand this, we just need to understand one simple rule -  **0 is false, and anything other than 0 is true**.

It doesn't matter if it is a negative number or a decimal number. Everything other than $0$ will be converted to true, which is outputted as $1$. Only $0$ is converted to false which is outputted as $0$.

You can observe the same upon running the code given in the editor.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-01T18:24:59.133Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<bool(0)<<endl;
    cout<<bool(1)<<endl;
    cout<<bool(720)<<endl;
    cout<<bool(-83)<<endl;
    cout<<bool(0.0000003)<<endl;
    
  return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL04E)