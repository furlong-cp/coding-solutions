# CPPFUNC06

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Parameters, Arguments

Listen

Note that there is a difference between `Parameters` and `Arguments` - actual values passed to a function.

Check the code template below:

- a, b are Parameters inside the function
- A, B are Arguments passed to the function

```
#include <iostream>
using namespace std;

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    // Calling the function with arguments
    int A = 5;
    int B = 3;
    int result = addNumbers(A, B);
    cout << "Sum: " << result << endl;
}

```

### Task

Can you write the code to give the correct output?
Check the input and expected output below.

### Sample 1:
Input
Output

```
 
```

```
Hello, Alice!
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T09:31:27.610Z  

```c_cpp
#include <iostream>
using namespace std;

// Define the greet function
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    // Define the name variable and call the greet function
    string name = "Alice";
    greet(name);
    
    
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CPPFUNC06)