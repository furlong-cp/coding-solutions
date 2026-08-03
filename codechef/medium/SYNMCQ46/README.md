# SYNMCQ46

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Multiple Choice Question

How many times will "C++" be printed by this code?

```
#include <iostream>
using namespace std;

int main() {

  for (int i = 0 ; i <= 5 ; i = i + 2) {
    cout << "C++"<< endl;
    if(i == 4)
       break;
  }
  
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-03T07:08:06.251Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int num[8] = {10, 20, 30, 40, 50, 60, 70, 80};
  for(int i : num) {
   cout << i << endl;
  }

  
} 
```

---

[View on CodeChef](https://www.codechef.com/problems/SYNMCQ46)