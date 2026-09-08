# SESO04

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-08T15:26:30.616Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n , k ; 
	cin >> n >> k ; 
	vector <int> v(n) ; 
	bool found = false ; 
	for (int  i = 0 ; i < n ; i++){
	    cin >> v[i] ;
	    if (v[i]== k){
	        found =  true ; 
	    }
	}
	if (found) cout << "Yes\n" ; 
	else cout << "No\n" ; 
	

}

```

---

[View on CodeChef](https://www.codechef.com/problems/SESO04)