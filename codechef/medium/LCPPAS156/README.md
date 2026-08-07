# LCPPAS156

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Prodigy Student

Write a program to input two student's names and percentages and print the name of the student with the higher percentage. In case they score equal percentages, print ' **equal** '.

### Input Format
- The first line of input will contain two strings: the name of the first student and the name of the second student.
- The second line of input will contain two percentages: the percentage of the first student and the percentage of the second student.
### Sample 1:
Input
Output

```
Amit Swarup
95 92
```

```
Amit
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-07T13:46:07.952Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string a,b;
	int x,y;
	cin >> a >> b;
	cin >> x >> y;
	if (x>y){
	    cout << a ;
	}
	else if (y>x){
	    cout << b;
	}
	else {
	    cout << "equal";
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS156)