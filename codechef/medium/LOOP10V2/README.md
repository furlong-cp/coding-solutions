# LOOP10V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### For Each Loop

Listen

There is also a  **`for-each loop`**, which is used exclusively to `loop` through elements in an `array`.

 **Syntax** 

```
   for (type loop_variable : array_name) {
       // code block to be executed
   }

   for (int i: arr) {
       cout << i << endl;
   }

```

Here the `loop_variable` holds the value of each element of the array one by one.

### Task

Write a program which does the following

- Create an integer array num which has the integers - 10, 20, 30, 40, 50, 60, 70, 80
- Output to the console the following All the elements of the given array in separate lines Use the for each loop syntax defined above

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-03T07:05:31.339Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int num[8] = {10, 20, 30, 40, 50, 60, 70, 80};
  for(int i : num) {
   cout << i << endl;
  }

  
} 
```

---

[View on CodeChef](https://www.codechef.com/problems/LOOP10V2)