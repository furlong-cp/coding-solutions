# LCPPAS169

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Which Day It Is

Debug the code in the IDE to solve the problem.

The code is supposed to do the following:

- Take a positive integer as input.
- If it's between 1 - 7, prints the corresponding day of the week.
- Else print, Invalid input. Check the sample test case.
### Sample 1:
Input
Output

```
5
```

```
Friday
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-08T09:59:01.213Z  

```c_cpp
// Debug the code.
#include <iostream>
using namespace std;

int main() {
    int day;
    cin >> day;
    
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS169)