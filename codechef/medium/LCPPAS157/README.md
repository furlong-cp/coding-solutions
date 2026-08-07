# LCPPAS157

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Prime Check

Given an integer  **N**  less than $10$, determine whether the number  **N**  is prime. If it is prime, print  **prime number** ; otherwise, print  **non-prime number**.

### Sample 1:
Input
Output

```
5
```

```
prime number
```

### Sample 2:
Input
Output

```
2
```

```
prime number
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-07T15:25:32.732Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        cout << "non-prime number\n";
        return 0;
    }

    bool found = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            found = false;
            break;
        }
    }

    if (found) {
        cout << "prime number\n";
    } else {
        cout << "non-prime number\n";
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS157)