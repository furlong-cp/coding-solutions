# PPSC88

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Prime Number

Listen

The last challenge of the while loop.

Chef wants to write a code which checks if a given number is prime.

- You are given a whole number N.
- Your task is to determine if N is a prime number or not and print "Yes" if it is prime, or "No" if it is not.
### Sample 1:
Input
Output

```
14635
```

```
No
```

### Sample 2:
Input
Output

```
13
```

```
Yes
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T13:02:55.220Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 2) { // special cases
        cout << "No";
        return 0;
    }
    int i = 2;
    bool isPrime = true;
    while (i < n) {
        // check if n is divisible by current number
        if (n % i == 0) {
            // if n is divisble by current number, set isPrime to false
            isPrime = false;
        }
        //update i
        i++;
    }
    if (isPrime) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/PPSC88)