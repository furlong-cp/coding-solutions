# LOOP2V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### User input Loop

Listen

Let us change the problem a bit.

### Task

Write a program which does the following

- Declare a variable num and store a user defined input from the console in it
- Declare a variable a and initialise it to 0
- Use the while syntax to create a loop, output the following to the console Print a in separate lines as long as it is less than num. Increment a by 1 in each iteration.
### Sample 1:
Input
Output

```
10
```

```
0
1
2
3
4
5
6
7
8
9
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T07:38:43.070Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int num;
  cin >> num; 
  while (num--){
      cout << 9-num << endl;
  }






  
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LOOP2V2)