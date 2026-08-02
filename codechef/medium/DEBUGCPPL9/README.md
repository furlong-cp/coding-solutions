# DEBUGCPPL9

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Incorrect Index

Listen

As our string uses zero-based indexing, many times we forget about it and write logic using one-based indexing, which gives us the wrong answer. This incorrect indexing gives you a logical error.

### Program to print the last character of the string

```
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // input length of the string 
    
    string s;
    cin>>s; // input string
    
    cout<<s[n]<<"\n"; // wrong answer as string uses zero based indexing
    
    cout<<s[n-1]<<"\n";// right answer 
}

```

### Task
- Give a program to print 1st, 4th and 6th characters of a string.
- Find out the logical error and solve it.
### Sample 1:
Input
Output

```
hellohowudoing
```

```
hlh
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:47:24.023Z  

```c_cpp
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s; // input string
    cout<<s[0]<<s[3]<<s[5]<<"\n";
    
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DEBUGCPPL9)