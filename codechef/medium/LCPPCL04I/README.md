# LCPPCL04I

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### lower case to upper case

Listen

Similar to the previous case, to convert a lower case letter to upper case letter we just need to add the difference of upper case letters and lower case letters.

### Task

You are given a lower case character ch. Output it in upper case.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-01T18:33:47.349Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch = 'r';
    char upper_case = char(ch -32);
    cout<<upper_case<<endl;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL04I)