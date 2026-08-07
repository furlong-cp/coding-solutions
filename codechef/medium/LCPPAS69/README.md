# LCPPAS69

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Divisible by 3 and 5

Write a program that checks if a given number is divisible by both 3 and 5.

[ **Note:**  Print the output in the same format as given below.]

### Sample 1:
Input
Output

```
15
```

```
Divisible by both 3 and 5
```

### Sample 2:
Input
Output

```
20
```

```
Not divisible by both 3 and 5
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-07T15:16:57.664Z  

```c_cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Complete the code
    if (n % 3 == 0 && n % 5 == 0){
        cout << "Divisible by both 3 and 5";
    }
    else {
        cout << "Not divisible by both 3 and 5";
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS69)