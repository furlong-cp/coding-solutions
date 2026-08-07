# LCPPAS59

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Positive and Negative

Write a program to check whether the given number as input is positive, negative, or zero.

### Sample 1:
Input
Output

```
20  
```

```
Positive  
```

### Sample 2:
Input
Output

```
0
```

```
Zero
```

### Sample 3:
Input
Output

```
-95
```

```
Negative
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-07T13:35:40.080Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    if (n>0) {
        cout << "Positive " ;
    }
    else if (n<0) {
        cout << "Negative" ;
    }
    else {
        cout << "Zero"; } 

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS59)