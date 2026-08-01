# CPPCLOP12

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Coding Problem

Listen

You are given a character in the variable $name$.
There is a special rule in Chef town - You will get special treatment if your name is `C` or `A`.

Output the following:

- 1 if the name is A or C
- 0 otherwise

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-01T18:53:17.194Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    char name = 'D';
    cout<<((name) == 65 || (name) == 67);
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CPPCLOP12)