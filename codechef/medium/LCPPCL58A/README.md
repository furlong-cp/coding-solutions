# LCPPCL58A

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Taking Multiple User Inputs

Listen

Similar to how we give multiple outputs, we can also take multiple inputs using the extraction operator(>>).

```
int a, b;
cin >> a >> b;
cout << b << " " << a << endl;

```

In the above code we declare two variables $a$ and $b$ and take input using cin and store the first input in $a$ and the second input in $b$. Thus, for the input:

```
2 3

```

the output will be:

```
3 2

```

Notice that you don't need to specify when to take the next input after a space. cin automatically stops taking input when it encounters a whitespace (like a space, tab, or newline) and then moves on to take the next input after the whitespace.

### Task

Write a program to take three inputs $a$, $b$ and $c$ and output their sum.

### Sample 1:
Input
Output

```
2 4 3
```

```
9
```

### Sample 2:
Input
Output

```
7 1 2
```

```
10
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:13:55.541Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int a, b, c, sum = 0;
    cin >> a >> b >> c;
    sum = a + b + c;
    cout << sum;


}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL58A)