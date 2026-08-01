# LCPPCL04A

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Need of long long

Listen

We saw in previous modules that int stores integers and  **long long int**  (or  **long long**  simply) stores larger integers, but when exactly do we need `long long`?

An integer can store values from $-2^{31}$ to $2^{31}$(exclusive). Which means it can reliably store numbers with 9 digits or less. but if we want to store more than that we need to use `long long`. A `long long` variable can store values from $-2^{63}$ to $2^{63}$. Which means it can reliably store numbers with `18` digits or less.

If we try to store a number bigger than the range of the variable, it will overflow. Which means the value in the variable will not be the number that we stored. It will have some unexpected value.

### Task

In the code editor you are given a code which is trying to store a 15 digit number in an integer.
This will cause an overflow and the value inside the variable will not be the number we are trying to store.

- Run the program to see the value inside the variable.
- Change the datatype to long long to properly store the number and then submit.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-01T18:18:13.420Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long num = 123456789012345;
    cout<<num<<endl;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL04A)