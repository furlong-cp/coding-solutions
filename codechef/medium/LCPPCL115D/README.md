# LCPPCL115D

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Print powers of 2

Listen

### Task

You have to print powers of $2$ from $2$ to $128$ in separate lines using a while loop:

- When using a loop you have to think about three things initialization, condition and update statement.
- So think about what we initialize the variable with? i.e., Where does the sequence start form?
- Think about what the condition will be? i.e., Till where is the sequence going?
- Also think about how the variable will be updating after every iteration. How the terms in the sequence are changing?
### Expected Output

```
2
4
8
16
32
64
128

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T07:37:11.233Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int n=128;
    int i=2;
    while (i<=n){
        cout <<i<<endl;
        i*=2;
    }
}


```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL115D)