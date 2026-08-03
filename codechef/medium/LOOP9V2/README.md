# LOOP9V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Looping through Arrays

Listen

You can `loop` through `array` elements as well with the  **`for`**  `loop`.

### Task

Write a program which does the following

- Declare a string array x and initialise it to letters of the word - 'CODING'
- Output the following to the console on separate lines Index number of each element in the array and the element itself

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-03T07:04:55.054Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string x[6] = {"C", "O", "D", "I", "N", "G"};
  for(int i = 0; i < 6; i = i + 1) {
    cout << i << " = " << x[i] << endl;
  }

  
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LOOP9V2)