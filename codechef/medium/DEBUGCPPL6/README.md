# DEBUGCPPL6

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Runtime error due to 0 used as a divisor

Listen

Runtime Error: Generally caused by accessing a negative or unreachable index of a string or an array or dividing a number by 0.

Example :-

```
 int a = 5; 
 int b = 0; 
 int c = a/b;      // runtime error due to dividing a number with zero  

```

### Task

Run the code given in the IDE - it will cause a run-time error.
Uncomment the `if` condition to make the code work - i.e. print `infinity` whenever b = 0

### Sample 1:
Input
Output

```
5 3
```

```
1
```

### Sample 2:
Input
Output

```
3 0
```

```
infinity
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:45:16.051Z  

```c_cpp
//uncomment the if condition
#include <iostream>

using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    
     if(b==0) {
       cout<<"infinity\n";
     }
    else {
        cout<<a/b<<"\n";
     }
    
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DEBUGCPPL6)