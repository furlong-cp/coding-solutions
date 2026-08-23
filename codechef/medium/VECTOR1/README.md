# VECTOR1

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Vector Operations

Solve the given MCQ.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-23T08:25:40.659Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> v(n); // Create a vector of size n
        for (int i = 0; i < n; i++) {
            cin >> v[i]; 
        }
        
        // Check if N is a multiple of 3
        if (n % 3 == 0) {
            if (n % 2 != 0) { // N is odd and multiple of 3
                cout << v[n / 2] << "\n";
            } else { // N is even and multiple of 3
                cout << v.front() << " " << v.back() << "\n";
            }
        } else { // N is not a multiple of 3
            cout << v.front() + v.back() << "\n";
        }
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/VECTOR1)