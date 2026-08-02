# LCPPCL69

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Curly braces

Listen

You might have noticed the '{' before and after `cout` in the previous problem.
This '{' is what is known as curly bracket.
C++ relies on curly brackets ('{' in the beginning and '}' at the end) to know what part of code is inside the if part of the code and what is not. Whatever is inside curly brackets is considered as one block of code.
When writing an if or else if you don't mention a block of code using curly brackets it executes only the first statement of the if or else section.

 **`Run`**  this code and to identify the  **`compilation error`**.
Fix the curly braces to solve the problem. The two output statements after if need to be in one block of code using curly brackets.

### Sample 1:
Input
Output

```
15
```

```
Not old enough to vote.
Wait for 3 years
```

### Sample 2:
Input
Output

```
20
```

```
Old enough to vote!
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:22:32.548Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

    int Age;
    cin >> Age;
    int Vage = 18;
    if (Age < Vage) {
        cout << "Not old enough to vote." << endl;
        cout << "Wait for " << (Vage - Age) << " years";}
    else{
        cout << "Old enough to vote!";
}
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL69)