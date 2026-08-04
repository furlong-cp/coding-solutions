# CPPFUNC01

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Functions in Cpp

Listen

Let us solve a simple problem to help us understand the importance of functions.

### Task

Your are given 3 lines of input.

- Each line consists of 2 space separated integers - $A$ and $B$

For each input - you need to compute and output the following on separate lines

- $A^2 + 2 *A* B + B^2$
- $A + B$

Check the sample output below to understand this problem statement better.

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
**Submitted:** 2026-08-04T09:24:53.847Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	for (int i=0;i<3;i++) {
	    int a,b;
	    cin>>a>>b;
	    cout << ((a*a)+ (2*a*b)+ (b*b)) << endl;
	    cout << (a+b)<< endl;
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/CPPFUNC01)