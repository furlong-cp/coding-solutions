# LCPPCL115F

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Taking an array as an input

Listen

Loops are very useful when taking an array as an input.
As an array can have any number of elements.
To take an array as an input:

- We take the number of elements $N$ in the array as input.
- We declare an array with size as the number of elements $N$.
- Then we take each element as input and store it at its index, one by one, starting from index $0$ to index $N-1$(last index).

For example:

```
int n;
cin >> n;
int arr[n];
for(int i = 0; i < n; i++){
    cin >> arr[i];
}

```

The above code declares an $n$ size array, and through a loop from $0$ to $n-1$, we take each element of the array as input and store it at its index.

### Task

Write a program to take an $n$ size array as an input and output the elements of the array in reverse order. You can do this by outputting elements one by one using a loop, starting from the last element($n-1$) till the first element ($0$).

### Sample 1:
Input
Output

```
5
3 1 5 0 2
```

```
2 0 5 1 3
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T08:16:54.243Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int arr[t];
	for (int i=0;i<t;i++){
	    cin>>arr[i];
	}
	for (int i=t-1;i>=0;i--){
	    cout << arr[i] << " ";
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL115F)