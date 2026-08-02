# PPSC94

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Sum of Even Integers

Listen

You are given an integer $N$.

You need to output the sum of all even integers from 1 to $N$.
Check the sample output given below.

### Sample 1:
Input
Output

```
5
```

```
6
```

### Sample 2:
Input
Output

```
10
```

```
30
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T13:05:59.492Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int sum =0;
	for (int i=1;i<=n;i++){
	    if (i % 2 == 0){
	        sum += i;
	    }
	}
	cout << sum;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/PPSC94)