# DEBUGCPPP1

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Debug the code - 1

Listen

Chef defines a pair of positive integers $(a,b)$ to be a Oneful Pair, if $a+b+(a \cdot b) = 111$

For example, $(1,55)$ is a Oneful Pair, since $1+55+(1 \cdot 55)=56+55=111$.

But $(1,56)$ is not a Oneful Pair, since $1+56+(1 \cdot 56) = 57+56=113$ not equal to $111$.

Given two positive integers $a$ and $b$, output Yes if they are a Oneful Pair. And No otherwise.

### Input Format

The only line of input contains two space-separated integers a and b.

### Output Format

Output Yes, if (a,b) form a Oneful Pair. Output No if they do not.

### Constraints
- 1 ≤ a,b ≤ 1000
### Sample 1:
Input
Output

```
1 55
```

```
Yes
```

### Sample 2:
Input
Output

```
1 56
```

```
No
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:48:33.677Z  

```c_cpp
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	if(a+b+(a*b)==111)
	{
	    cout<<"YES";
	}
	else
	{
	    cout<<"NO";
	}
	
}
```

---

[View on CodeChef](https://www.codechef.com/problems/DEBUGCPPP1)