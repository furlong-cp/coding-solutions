# DSAAGP1094 - Rating 932

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T14:59:57.352Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int k) {
    int left = 0, right = n-1;
    while (left <= right) {
        int middle = (left + right) / 2; 
        if (arr[middle]==k) {
            return middle;
        } else if (arr[middle] > k) {
            right = middle-1 ;
        } else {
            left = middle+1;
        }
    }
    return -1; // k not found
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << binary_search(arr, n, k) << endl;
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DSAAGP1094)