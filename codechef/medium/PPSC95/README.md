# PPSC95

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Fibonacci Series

Listen

You are given an integer $N$.

You need to output the first $N$ numbers of the Fibonacci Series.
Check the sample output given below.

 **Note:**  A Fibonacci number is a series of numbers in which each number is obtained by adding the two preceding numbers.

F1 = 0, F2 = 1
FN = FN-2 + FN-1

### Sample 1:
Input
Output

```
5
```

```
0 1 1 2 3
```

### Sample 2:
Input
Output

```
8
```

```
0 1 1 2 3 5 8 13
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T16:30:32.448Z  

```c_cpp
// Remove the underscores and complete the code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        int c =a+b ;
        cout << c << " ";
        a = b;
        b = c;
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/PPSC95)