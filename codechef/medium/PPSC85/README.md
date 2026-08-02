# PPSC85

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Sum of N Integers

Listen

Chef was given an integer input N.

He wants to write a code using `while` loops to output the sum of all integers from 1 to $N$.
Help him complete the code by filling in the blanks.

### Sample 1:
Input
Output

```
5
```

```
15
```

### Sample 2:
Input
Output

```
10
```

```
55
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T08:44:11.610Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int sum=0;
	for (int i=1;i<=t;i++){
	    sum +=i;
	}
    cout << sum;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/PPSC85)