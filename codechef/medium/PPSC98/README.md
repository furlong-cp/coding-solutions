# PPSC98

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Nested loops continued

Listen

Ok - try out a problem yourself.

### Task

Given an integer $N$ - create a square pattern of side $N$.

Check the sample output given below for $N$ = 4.

### Sample 1:
Input
Output

```
4
```

```
 **   ** 
 **   ** 
 **   ** 
 **   ** 
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T08:34:49.690Z  

```c_cpp
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    // Complete the code
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout << "*" << " " << endl ;
        }
    }
    
}
```

---

[View on CodeChef](https://www.codechef.com/problems/PPSC98)