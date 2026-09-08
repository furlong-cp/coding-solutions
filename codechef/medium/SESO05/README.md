# SESO05

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-08T15:30:09.609Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s ; 
	cin >> s  ;
	char a; 
	cin >> a ; 
	bool found = false ; 
	int j = 0  ; 
	for (int i = 0 ; i < s.size() ; i++ ){
	    if (s[i] == a){
	        found = true ; 
	        j = i ; 
	    }
	}
	if (found){
	    cout << j ;
	}
	else {
	    cout << -1  ;
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/SESO05)