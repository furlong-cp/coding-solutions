# LCPPCL63

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Find The Area of Any Rectangle

Listen

Let's revisit our favourite rectangle and its area problem.

Complete the given program in IDE which should do the following:

- Declare $2$ integer variables length and width
- Accept 2 user inputs from the console and assign them to length and width.
- Declare another integer variable area - compute the area of the rectangle and assign it to area.
- Print area to the console with the same text message as in sample output.
### Sample 1:
Input
Output

```
10
23
```

```
Area of the rectangle is: 230
```

### Sample 2:
Input
Output

```
2
3
```

```
Area of the rectangle is: 6
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:16:48.221Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int l, w;
  int area;
  cin >> l;
  cin >> w;
  area = l * w;
  cout << "Area of the rectangle is: " <<area;

  
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL63)