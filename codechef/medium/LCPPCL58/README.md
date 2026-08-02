# LCPPCL58

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Taking User Input

Listen

You have already learnt that  **`cout`**  is used to output (print) values.
Now we will use  **`cin`**  to get user input.

`cin` is a predefined keyword that reads data from the keyboard with the extraction operator >>.

- cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)
- cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)

```
int num;
cin >> num;

```

In the above code we declare a variable $num$ and take input using cin and store the input in $num$

### Task

Complete the given program in IDE which does the following:

- Declare an integer variable a.
- Try taking a number from the console and assign it to a.
- Print the assigned value to a with text "Your number is: ".
### Sample 1:
Input
Output

```
76
```

```
Your number is: 76
```

### Sample 2:
Input
Output

```
25
```

```
Your number is: 25
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:11:57.896Z  

```c_cpp
#include <bits/stdc++.h>

int main() {
    int a;
    std::cin >> a;
    std::cout << "Your number is: " << a;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL58)