# LCPPCL68

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### If & Else Statements

Listen

 **`if`**  and  **`else`**  can be used together to create conditions.
There are multiple operators which can be used in conditional statements.

- Equal to '=='
- Not Equal '!='
- Greater than '>'
- Less than '<'
- Greater than or equal to '>='
- Less than or equal to '<='

The syntax for if/else is:

```
if(condition){
    //code to be executed if the condition is true
}
else {
    //code to be executed if the condition is false
}

```

### Task

Write a program which does the following

- Let's think of a real-life example where we need to find out if a person is old enough to vote.
- Find out if the age is greater than OR equal to the voting age limit, which is set to 18.
- Declare the variables age and voting_age - and initialise voting_age to 18 and take an integer input and store it in age.
- Compare age and voting_age using the syntax given above and output the following "Old enough to vote!" if age is greater than or equal to voting_age "Not old enough to vote." if age is lesser than voting_age
### Sample 1:
Input
Output

```
25
```

```
Old enough to vote!
```

### Sample 2:
Input
Output

```
15
```

```
Not old enough to vote.
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:23:08.447Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

    int age;
    cin >>age ;
    int voting_age = 18;
    
    if (age >= voting_age) {
        cout << "Old enough to vote!";
    } else {
        cout << "Not old enough to vote.";
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL68)