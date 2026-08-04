# CPPFUNC05

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Return values

Listen

Functions in Cpp can serve two primary purposes when it comes to providing information to the caller: they can either return a value or print an output.

#### Returning Values from Functions:

When a function returns a value, it's providing a piece of data back to the caller.
This data can be used for further processing, assignment to variables, or any other purpose within the program. The return statement is used to send a value back to the caller.

Check the sample below:

```
int calculateSquare(int num) {
    int squareResult = num * num;
    return squareResult;
}

// Calling the function and capturing the return value
int result = calculateSquare(5);
cout << "Square of 5: " << result << endl;  // Output: Square of 5: 25

```

#### Printing Output from Functions:

A function can also directly print output to the console using cout.
However, this doesn't provide any data back to the caller in a way that can be used elsewhere in the program.
The primary purpose here is to display information, not to provide data for further processing.

Check the example below which gives the same output as the code above:

```
void printSquare(int num) {
    int squareResult = num * num;
    cout << "Square of " << num << " is: " << squareResult << endl;
}

// Calling the function
printSquare(5);  // Output: Square of 5 is: 25

```

### Task

Create the function in the IDE to output the following to the IDE by printing from inside the function.

- $A^2 + 2 *A* B + B^2$
- $A + B$

Check sample output below.

### Sample 1:
Input
Output

```
3 5
2 7
4 1
```

```
64
8
81
9
25
5
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T09:30:51.441Z  

```c_cpp
#include <iostream>
using namespace std;

void computeValue(int a, int b) {
    // Solution
    int c= a*a + 2*a*b + b*b ;
    int d = a+b;
    cout << c << endl;
    cout << d <<endl;
    
}

int main() {
    int t = 3;
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        computeValue(a, b);
    }
    
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CPPFUNC05)