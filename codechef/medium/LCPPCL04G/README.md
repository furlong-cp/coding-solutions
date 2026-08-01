# LCPPCL04G

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Character Operations

Listen

As characters are stored in integer form, we can also manipulate characters using arithmetic operations.

```
cout<<char('a'+1);

```

As 'a' is stored as 97 and 'b' is stored as '98'. If we perform 'a'+1 and convert this to character. we get 'b' as the output.

```
cout<<char('b'-1);

```

Similarly if we subtract 1 from 'b' and convert it to a character we get 'a'.

### Task

Convert 'a' to 'e' and output 'e'. Check what value do you have to add to 'a' to get 'e'?

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-01T18:28:48.766Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<char('a'+4);
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL04G)