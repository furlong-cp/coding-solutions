# RPTS

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Repaint the Stripe

You are given a string $s$ of length $n$, consisting only of the characters `W` and `B`.

The character `W` represents a white cell, while `B` represents a black cell.

You may recolor any white cell to black. Find the minimum number of cells that must be recolored so that $s$ contains at least one  **substring**  of length $k$ consisting only of `B`.

If such a substring already exists, print $0$.

`substring`: A substring is a continuous part of a string. For example, `BWB` is a substring of `BBWBW`.

### Input Format

The first line contains two space-separated integers $n$ and $k$. The second line contains the string $s$ of length $n$.

### Output Format

Print a single integer — the minimum number of white cells that must be recolored.

### Constraints
- $1 \le k \le n \le 2 \times 10^5$
- $s$ consists only of the characters W and B
### Sample 1:
Input
Output

```
5 3
BBWBW
```

```
1
```

### Explanation:

Recoloring the third cell changes the string to `BBBBW`, which contains a substring of length $3$ consisting only of `B`.

Therefore, the answer is $1$.

### Sample 2:
Input
Output

```
5 5
BBWBW
```

```
2
```

### Explanation:

Recoloring the third and fifth cells changes the string to `BBBBB`.

Therefore, the answer is $2$

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-10T14:55:19.397Z  

```c_cpp
/*
author - furlong
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n , k ; // n = main string length & k = substring length 
    cin >> n >> k ;
    string s; // main string 
    cin >> s ; 
    vector <char> v ;
    for (int i = 0 ; i < s.size() ; i++){
        v.push_back(s[i]);
    }
    int count = 0 ;
    for (int i = 0 ; i < k ; i++){
        if (v[i]!= 'B') {
            count++;
        }
    }
    cout << count ;
    

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/RPTS)