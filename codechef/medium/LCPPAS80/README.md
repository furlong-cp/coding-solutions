# LCPPAS80

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Arithmetic operation

Write a C++ program that takes two integers and an operator (+, -, *, /) as input.
Use a 'switch' statement to perform the corresponding arithmetic operation and print the result.

Check the sample input / output below for clarity.

(**Note:**  It is guaranteed that in the hidden test cases, the second number will not be 0 during division.)

### Sample 1:
Input
Output

```
5 2 +
```

```
7
```

### Sample 2:
Input
Output

```
10 10 /
```

```
1
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-08T09:53:25.840Z  

```c_cpp
 #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	char c;
	cin >> a >> b >> c;
	switch (c){
	    case '+':
	        cout << a+b ;
	        break;
	    case '-' :
	        cout <<  a-b ;
	        break;
	    case '*' :
	        cout << a*b ;
	        break;
	    case '/' : 
	        cout << a/b ;
	        break;
	    
	                   
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS80)