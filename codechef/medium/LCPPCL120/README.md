# LCPPCL120

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Table of any number

Listen

Write a program which does the following:

- Create a variable n and store the user defined integer input from console in n.
- Output to the console the multiplication table for n upto 10: In the previous module we manually entered each row of the table. In this problem - use loops to generate the table.
### Sample 1:
Input
Output

```
5
```

```
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T08:13:58.423Z  

```c_cpp
// Remove the underscores and complete the code
#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int n;
    cin >> n;

    for(int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n*i << endl;
    }

}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL120)