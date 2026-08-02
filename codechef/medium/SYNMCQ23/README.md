# SYNMCQ23

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Multiple Choice Question

What will be the output of this code, if the user enters 5 and 9?

```
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b; 
  int c = a + 2;
  int d = c + b;
  cout << d;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:15:30.476Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Complete the code as per given instructions on the left
    int a, b;
    int sum;
    int diff;
    cin>>a>>b;
    sum = a+b;
    diff = a-b;
     
    cout << "Sum is: " << sum << endl;
    cout << "Difference is: "<< diff << endl;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SYNMCQ23)