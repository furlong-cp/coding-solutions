# PPSC139B - Rating 970

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Sum and Difference using Pointer

Listen

You are required to complete the function called  **`sum_difference`**  given in the editor. This function will take two integer pointers as parameters and will not return any output.

### Task
- Take two integer inputs in variables value1 and value2.
- Inside sum_difference function, do the following: Add the values pointed to by value1 and value2, and store the result in the memory location pointed to by value1. Calculate the absolute difference of the value pointed out by value1 and value2 and store the result in the location pointed by value2.
- Call sum_difference with value1 and value2 (use address-of operator) as arguments.
- Print the values stored in value1 and then on next line, the value stored in value2 after calling sum_difference function.
### Sample 1:
Input
Output

```
2 6
```

```
8
4
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T17:06:04.927Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

void sum_difference(int *value1, int *value2) {
    //Sum the values pointed by value1 and value2 
    int temp = *value1 + *value2;
    
    //Calculate the absolute difference of the value pointed out by value1 and value2
    // Store the result in the location pointed by value2.
    *value2 = abs(*value2 - *value1);
    // store the result of sum in the location pointed by value1.
    *value1 = temp;
}

int main() {
    int value1, value2;
    // take twop inputs
    cin >> value1 >> value2;
    sum_difference(&value1, &value2);
    
    // Output the results
    cout << value1 << endl;
    cout << value2 << endl;
    
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/PPSC139B)