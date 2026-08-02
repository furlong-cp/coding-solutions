# SYNMCQ44

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Multiple Choice Question

How many times will "C++" be printed by this code?

```
#include <iostream>
using namespace std;

int main() {

  for (int i = 0 ; i <= 5 ; i = i + 2) {
    cout << "C++"<< endl;
  }
  
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T08:17:46.102Z  

```cpp
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

[View on CodeChef](https://www.codechef.com/problems/SYNMCQ44)