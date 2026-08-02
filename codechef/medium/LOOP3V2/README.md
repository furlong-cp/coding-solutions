# LOOP3V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Do While Loop

Listen

The  **`do/while`**  `loop` is a type of `while loop`.
This `loop` will execute the code block once, before checking if the condition is true, then it will repeat the `loop` as long as the condition is true.

### Syntax

```
    do {
       // Code to be executed
    }
    while (condition); // The loop continues to iterate as long as the condition is true.

```

### Task

Write a program which does the following

- Declare an integer variable i and initialise it to 0
- Use the do/while loop to output i to the console as long as i is less than 6.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T07:40:37.825Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  int i = 0;
  do{
    cout << i << endl;
    i = i+1;
  }
  while(i < 6);

  
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LOOP3V2)