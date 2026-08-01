# VAD7V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Bool Datatype

Listen

In programming, you often need to know if something is true or false.
For this, we can have `variables` containing just one of these two values - `True` or `False`.
When the value is returned or printed, `true = 1` and `false = 0`.
These `variables` are called  **`"bool"`**  or  **`"boolean variables"`**.
We will look at applications of these in later modules.

Example:

```
bool var = true;

```

### Task

Write a program which does the following

- For now, declare two variables x and y
- Assign the value true to x and the value false to y
- Output x and y to the console on separate lines

Note how we are not using any quotes around  ***`true`**  *and  ***`false`***. Also, they have to be in lowercase alphabets.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-01T17:15:48.177Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
    
    bool x = true;
    bool y = false;
    cout << x << endl;    //x and y need to be cout on separate lines
    cout << y;  
}
```

---

[View on CodeChef](https://www.codechef.com/problems/VAD7V2)