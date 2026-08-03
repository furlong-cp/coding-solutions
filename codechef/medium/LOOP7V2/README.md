# LOOP7V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Break Statement

Listen

You have already seen the  **`break`**  statement used in an earlier module of this learning path.
It was used to "jump out" of a `switch` statement.
The  **`break`**  statement can also be used to jump out of a `loop`.

### Task

Write a program which does the following

- Initialise an integer variable i to 0
- Output to the console i from 0 to 15 using a for loop Stop execution when the value of i reaches 13

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-03T05:38:14.277Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

    for (int i = 0; i <= 15; i++) {
        if (i ==13) {
            break;
        }
        cout << i << endl;
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LOOP7V2)