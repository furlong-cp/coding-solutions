# DEBUGCPPL8

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Incorrect Conditionals

Listen

Incorrect conditionals are one of the most common types of logical errors, which can be seen while using conditional statements like if-else and loops.

Example:- The code below is supposed to do the following

- If an integer is even, then output True
- If an integer is odd, then output False

```
 #include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<"false\n";
    }
    else
    {
        cout<<"true\n";
    }
}
        

```

However, the code above is incorrect

- Based on the code - if n%2==1 - i.e. for odd numbers - we will output True
### Task

Given a program to check a number is greater than 5 or not.

- Run the code it will give wrong answer.
- find the wrong condition and correct it.
### Sample 1:
Input
Output

```
5
```

```
the number is smaller than or equal to 5
```

### Sample 2:
Input
Output

```
6
```

```
the number is greater than 5
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:46:52.021Z  

```c_cpp
//if condition is wrong it should be changed to n>5
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>5)
    {
        cout<<"the number is greater than 5";
    }
    else
    {
        cout<<"the number is smaller than or equal to 5";
    }

    
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DEBUGCPPL8)