# LCPPCL115A

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Print Numbers 5 - 20

Listen

### Task

You have to print numbers from 5 to 20 in separate lines using a while loop.

- When using a loop you have to think about three things - initialisation, condition and update statement.
- So think about what we initialise the variable with? i.e., Where does the sequence start form?
- Think about what the condition will be? i.e., Till where is the sequence going?
- Also think about how the variable will be updating after every iteration. How the terms in the sequence are changing?
### Expected Output

```
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T07:28:41.786Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5; //Initialization
    
    while(n<=20){
        cout << n << endl;
        n++;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL115A)