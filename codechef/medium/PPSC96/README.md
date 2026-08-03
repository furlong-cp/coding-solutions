# PPSC96

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Power of a Number

Listen

You are given 2 space separated integers $N$ and $m$.

You need to output the value $N^m$.
Check the sample output given below.

### Sample 1:
Input
Output

```
5 3
```

```
125
```

### Sample 2:
Input
Output

```
8 4
```

```
4096
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-03T05:25:25.990Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	int op=1;
	for (int i=1;i<=b;i++){
	    op*=a;
	}
	cout << op;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/PPSC96)