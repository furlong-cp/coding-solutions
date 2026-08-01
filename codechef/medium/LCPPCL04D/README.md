# LCPPCL04D

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Converting different types of variables

Listen

In the previous problems we learned how to convert a type of variable to another.

Run the code in the editor to see how the values change upon converting the type of the variable.

We'll explain how some these conversions are happening in the upcoming problems

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-01T18:24:08.051Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "float to integer - 17.84 changes to -> " << int(17.84) << endl;
    cout << "integer to float - 2 changes to -> " << float(2) << endl;
    cout << "integer to char - 68 changes to -> " << char(68) << endl;
    cout << "char to integer - C changes to -> " << int('C') << endl;
    cout << "integer to boolean - 158 changes to -> " << bool(156) << endl;
    cout << "boolean to integer - false changes to -> " << int(false) << endl;
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL04D)