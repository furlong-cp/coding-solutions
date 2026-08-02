# SYNMCQ34

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Multiple Choice Question

What will be the output of this code when the input is 3?

```
#include <iostream>

using namespace std;

int main() {
    int binary;
    cin >> binary;
    switch (binary) {
        case 0:
            cout << "Zero";
            break;
        case 1:
            cout << "One";
            break;
        default:
            cout << "Not valid";
    }

}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:42:27.086Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int day;
  cin>> day;
  switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  }

  
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SYNMCQ34)