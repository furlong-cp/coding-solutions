# LOOP8V2VE

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Continue Statement

Listen

Recall that  **`break`**  exit the `loop` entirely when its condition was met - ignoring all subsequent iterations.
The  **`continue`**  statement skips one iteration (in the `loop`), if a specified condition occurs, and continues with the next iteration in the `loop`.

### Task

Write a program that does the following

- Declare a variable n and set it to a user defined input
- Output to the console a series of numbers from 0 to 12 with the following condition Skips the number inserted by the user.
### Sample 1:
Input
Output

```
5
```

```
0
1
2
3
4
6
7
8
9
10
11
12
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-03T07:03:30.808Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    for(int i = 0; i <= 12; i = i + 1) {
        if(i == n) {
            continue;
        }
        cout << i << endl;
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LOOP8V2VE)