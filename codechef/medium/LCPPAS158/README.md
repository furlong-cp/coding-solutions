# LCPPAS158

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Leap Year

Write a program to check whether a given year is a leap year or not. If a number is divisible by $400$ or divisible by $4$ but not by $100$, then the year is considered a leap year. Print  **Leap year**  if the given year is a leap year; otherwise, print  **Not a leap year**.

### Sample 1:
Input
Output

```
2024
```

```
Leap year
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-07T15:38:41.464Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	if ((t % 400 ==0 || t % 4 == 0) && t % 10 !=0){
	    cout << "Leap year";
	}
	else {
	    cout << "Not a leap year";
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS158)