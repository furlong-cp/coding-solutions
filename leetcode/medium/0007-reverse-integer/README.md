# Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a signed 32-bit integer `x`, return `x` *with its digits reversed*. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-231, 231 - 1]`, then return `0`.

 **Assume the environment does not allow you to store 64-bit integers (signed or unsigned).** 

 

 **Example 1:** 

```
Input: x = 123
Output: 321

```

 **Example 2:** 

```
Input: x = -123
Output: -321

```

 **Example 3:** 

```
Input: x = 120
Output: 21

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 38.18%)  
**Memory:** 8.8 MB (beats 20.53%)  
**Submitted:** 2026-09-14T09:32:50.934Z  

```cpp
class Solution {
public:
    int reverse(int n) {
        //int k = n ; 
        vector <int> v ; 
        while (n!=0){
            int a = n%10 ;
            v.emplace_back(a);
            n/=10 ; 
        }
        long long ans= 0 ; 

        for (int i = 0 ; i < v.size(); i++){
            ans = ans*10 + v[i] ;  
        }
        if (ans>INT_MAX || ans < INT_MIN) return 0 ; 
        return ans ; 
    }

};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)