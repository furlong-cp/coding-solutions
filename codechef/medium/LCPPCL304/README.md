# LCPPCL304

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Address of a variable

Listen

In the previous problem we initialised a variable x and we also learned that this variable has an address. To get the address of any variable we use the  **`&`**  (address-of operator) before the variable name.

```
int main() {
    int x = 42;  // Declare and initialize an integer variable
    cout << &x;  // Print the address of the variable num
    return 0;
}

```

Run the code in the IDE and check the address of the variable

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T13:51:36.155Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
    int x = 42;  // Declare and initialize an integer variable
    cout << &x;  // Print the address of the variable num
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL304)