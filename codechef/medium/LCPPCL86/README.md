# LCPPCL86

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Problem

Listen

Write a program using nested If/Else statements which does the following

- Declare a variable day
- Take an integer input in this variable
- Output the day of the week corresponding to that number. For example, if day is 1 print "Monday", else if day is 2 print "Tuesday, similarly if day is 7 print "Sunday".
### Sample 1:
Input
Output

```
1
```

```
Monday
```

### Sample 2:
Input
Output

```
4
```

```
Thursday
```

### Sample 3:
Input
Output

```
7
```

```
Sunday
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:37:35.211Z  

```c_cpp
// Remove the underscores (__) and complete the code
#include <bits/stdc++.h>
using namespace std;

int main() {

    int day;
    cin >> day;
    if (day == 1) {
        cout <<  "Monday" << endl;
    }
    else if (day == 2) {
        cout << "Tuesday" << endl;
    }
    else if (day == 3) {
        cout << "Wednesday" << endl;
    }
    else if (day == 4) {
        cout << "Thursday" << endl;
    }
    else if (day == 5) {
        cout << "Friday" << endl;
    }
    else if (day == 6) {
        cout << "Saturday" << endl;
    }
    else if (day == 7) {
        cout << "Sunday" << endl;
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL86)