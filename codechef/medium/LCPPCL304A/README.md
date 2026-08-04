# LCPPCL304A

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Pointer Declaration

Listen

The addresses of variables we've been talking about can be stored inside special variables called  **`pointer`**  variables.

A pointer variable holds the address of another variable. To declare a pointer variable, we need to specify the type of data that the address will point to. The syntax for declaring a pointer variable looks like this:

```
data_type *pointer_name;

```

- data_type: This is the type of data stored at the address. For example, if the pointer will store the address of an int variable, data_type will be int
- *: This is the asterisk operator. It indicates that the variable is a pointer
- pointer_name: This is the name you give to your pointer variable
### Pointer Initialization

Now we can get the address using  **`&`**  operator and store the address inside a pointer variable, like so:

```
int main() {
    int x = 40;  // Declare and initialize an integer variable
    int *p;      // Declare a pointer to an integer
    p = &x;    // Initialize the pointer with the address of 'num'
    return 0;
}

```

 **Note:**  Every time we run the code,  **x**  is allocated a new memory address, so the pointer prints a different address each time the code is executed.

 *Click Submit and observe the code and output.*

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T13:51:51.068Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
    int x = 40;  // Declare and initialize an integer variable
    int *p;      // Declare a pointer to an integer
    p = &x;    // Initialize the pointer with the address of 'num'
    cout << p; // Print the memory location of variable 'x'
    
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL304A)