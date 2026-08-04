# PPSC100

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Another Pattern Problem

Listen

Go ahead and practice another problem.

Given an integer $N$ - print a number pattern of height $N$.
Check the sample output given below.

### Sample 1:
Input
Output

```
5
```

```
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T09:19:18.763Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for (int i = 1; i<=n;i++){
	    for (int j=1; j<=i ; j++){
	        cout << j << " ";
	        }
	   cout << endl;
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/PPSC100)