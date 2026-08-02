# PPSC86

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Factorial

Listen

Chef's coding journey continues.
Chef was given an integer input $N$.

He wrote a code using WHILE loops to output the factorial of N.
But he wasn't able to complete some parts of the code.
Help him complete his code.

 **Note:**  The factorial of a number $N$ is the product of each number from 1 to $N$.
$N!$(N factorial)$= 1 \times 2 \times 3 \times..... N$

### Sample 1:
Input
Output

```
5
```

```
120
```

### Sample 2:
Input
Output

```
8
```

```
40320
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T08:48:05.196Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int factorial = 1;
    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }
    cout << factorial << endl;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/PPSC86)