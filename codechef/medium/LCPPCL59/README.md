# LCPPCL59

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Calculator

Complete the given program to create a simple calculator that performs addition and subtraction.

#### Steps:
- Declare 2 integer variables a and b.
- Initialise the variables a and b with the two user inputs.
- Declare an integer variable sum - and store the value of addition of a and b to it.
- Declare an integer variable diff - and store the value of subtraction of a and b to it.
- Print sum and diff to the console on separate lines with the same message as given in sample output.
### Sample 1:
Input
Output

```
35
23
```

```
Sum is: 58
Difference is: 12
```

### Sample 2:
Input
Output

```
8
2
```

```
Sum is: 10
Difference is: 6
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:14:47.511Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Complete the code as per given instructions on the left
    int a, b;
    int sum;
    int diff;
    cin>>a>>b;
    sum = a+b;
    diff = a-b;
     
    cout << "Sum is: " << sum << endl;
    cout << "Difference is: "<< diff << endl;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL59)