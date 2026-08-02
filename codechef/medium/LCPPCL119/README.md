# LCPPCL119

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### For Loop

Listen

When you know exactly how many times you want to `loop` through a block of code, use the  **`for`**  `loop` instead of a  **`while`**  `loop`:

 **Syntax:** 

```
    for (statement 1; statement 2; statement 3) {
      // code block to be executed
    }
    // Statement 1 is executed (one time) before the execution of the code block.
    // Statement 2 defines the condition for executing the code block.
    // Statement 3 updates (every time) after the code block has been executed.

```

Example:

```
    for (int i = 0; i < 5; i++) 
       cout << i << endl;
    }

```

The for loop in code above does the following:

- It initializes the loop control variable i to 0.
- Before each iteration of the loop, condition (i < 5) is checked.
- Lastly, the loop control variable i is incremented by 1.

The output will be numbers starting from 0 to 4 (each on a new line).

### Task

Write a program which does the following:

- Initialise a int variable n and accept a user defined input from the console.
- Output "C++" to the console n number of times.
### Sample 1:
Input
Output

```
4
```

```
C++
C++
C++
C++
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T08:04:19.231Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  // Remove the underscores and complete the code
  for (int i = 0; i < 4; i++) {
    cout << "C++" << endl;
  }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL119)