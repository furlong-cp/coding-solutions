# LCPPCL64

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Cubes and Squares

Listen

Write a program which does the following

- Declare an integer variable a
- Accept a user input and store it in the variable a
- Declare 2 variables square and cube - compute and store the square and cube of a in them
- Output square and cube to the console on separate lines
- Note Square of an integer = N2 = N  *N Cube of an integer = N3 = N*  N * N
### Sample 1:
Input
Output

```
3
```

```
Square is: 9
Cube is: 27
```

### Sample 2:
Input
Output

```
5
```

```
Square is: 25
Cube is: 125
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:17:44.731Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Replace the underscores (`__`) with the correct code
  int a;
  int square;
  int cube;
  cin >> a;
  square = a * a;
  cube = square * a;
  cout << "Square is: " << square << endl;
  cout << "Cube is: " << cube;

  return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL64)