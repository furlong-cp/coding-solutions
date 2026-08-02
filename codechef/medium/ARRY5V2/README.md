# ARRY5V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Displaying the count of elements

Listen

To get the size of an `array`, you can use the  **`sizeof()`**  operator:
For e.g.

```
int myNumbers[5] = {10, 20, 30, 40, 50};
cout<<sizeof(myNumbers);

```

The output of above code will be 20. It is because the `sizeof()` operator returns the size of a type in bytes. `int` type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.

To get the number of elements in the array, you can use this code:

```
int myNumbers[5] = {10, 20, 30, 40, 50};
cout<<sizeof(myNumbers) / sizeof(myNumbers[0]);

```

The output of the above code will be: `5`

### Task

Write a program which does the following

- Create an int array containing the elements: 10, 20, 30, 40, 50, 60
- Compile and output to the console the accurate count of the number of integer elements in the given array.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T07:23:14.955Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[6] = {10,20,30,40,50,60};
    cout << (sizeof(array)/sizeof(array[0]));




  
}

```

---

[View on CodeChef](https://www.codechef.com/problems/ARRY5V2)