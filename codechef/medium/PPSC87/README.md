# PPSC87

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Count of Digits

Listen

Chef's coding journey continues.
Chef was given an integer input $N$ - he needs to find the number of digits in the given integer.

- Let's assume the number of digits in $N$ is $x$.
- Whenever we divide a number by $10$ and store it in an integer, the right-most digit of that number gets removed.
- Since $1$ digit gets removed each time we divide a number by $10$, thus the total number digits we can remove from a number are the total number of digits in the number.
- Thus, we can divide $N$ by $10$, $x$ times before it becomes $0$, after which the division will not affect the number and it will remain $0$(as $0$ divided by anything is still $0$).
- So, If we keep dividing the integer $N$ by $10$ in a loop, till it reaches $0$, the loop will execute $x$ times.
- Now, we can just count how many times the loop was executed, by starting a count from $0$ and increasing the count each time the loop executes.
- Here, we can get the number of digits in $N$ in count.

Based on this, Help him complete the `while` loop.

### Sample 1:
Input
Output

```
14635
```

```
5
```

### Sample 2:
Input
Output

```
3246
```

```
4
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T08:51:19.568Z  

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

[View on CodeChef](https://www.codechef.com/problems/PPSC87)