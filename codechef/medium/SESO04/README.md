# SESO04

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Linear Search in string

Given a string and a character as input, print the first position of the character in the string if it is present. If the character does not exist in the string, print " **-1** ".

### Input Format
- The first line contains a string.
- The second line contains a single character.
### Output Format
- Print the first position (0-based index) of the character in the string if it is present.
- Print "-1" if the character is not present in the string.
### Sample 1:
Input
Output

```
HelloHowYouDoing
w
```

```
7
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-08T15:30:08.202Z  

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

[View on CodeChef](https://www.codechef.com/problems/SESO04)