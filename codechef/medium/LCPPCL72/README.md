# LCPPCL72

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Else Statement

Listen

The `'else'` keyword includes anything which isn't included in the previous conditions.

### Task

Write a program which does the following

- Create integer variables r and k - the weight of friends Ram and Karan
- Take input in r and then k
- Compute and output the following to the console "Ram is heavier than Karan." if r is greater than k "Karan is heavier than Ram" if r is lesser than k "Ram & Karan have the same weight!" for any remaining conditions.
### Sample 1:
Input
Output

```
24 32
```

```
Karan is heavier than Ram
```

### Sample 2:
Input
Output

```
78 78
```

```
Ram & Karan have the same weight!
```

### Sample 3:
Input
Output

```
32 24
```

```
Ram is heavier than Karan.
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:29:56.688Z  

```c_cpp
// Remove the underscores (__) and complete the code
#include <bits/stdc++.h>

using namespace std;

int main() {

    int r;
    int k;
    cin >> r;
    cin >> k;
    if(r>k) {
        cout << "Ram is heavier than Karan." << endl;
    }
    else if(r<k) {
        cout << "Karan is heavier than Ram" << endl;
    }
    else {
        cout << "Ram & Karan have the same weight!" << endl;
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL72)