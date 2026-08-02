# SYNMCQ30

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Multiple Choice Question

What will be the output of this code?

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 0;
    int b = -10;

    if (a >= b) {
        cout << "a is greater or equal to b. ";
    }
    if (a == 0) {
        cout << "a is 0. ";
    }
    if (a <= 5) {
        cout << "a is not more than 5. ";
    }
    cout << "Program ends";
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:33:14.105Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int a;
  int b;
  cin >> a;
  cin >> b;
  if (a >= b) {
    cout << "Bravo!" << endl;
  } 
  else {
    cout << "Try Again" << endl;
  }

  
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SYNMCQ30)