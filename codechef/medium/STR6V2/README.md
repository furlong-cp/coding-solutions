# STR6V2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Changing Characters in a String

To change the value of a specific character in a string

- We refer to the index number to access the specific character by using the indexing operator []
- We then assign the new character (enclosed in single quotes ' ') to it.

For example

```
string myString = "Chaf";
myString[2] = 'e';

cout << myString;

// Output:
// Chef

```

Here we changed the character at index 2 of "Chaf" which is 'a' with 'e'. Remember indexing always starts from 0.

### Task

Write a program which does the following

- Initialise a string variable word and assign the value "Ocygen" to it.
- You now want to fix the typo in the given string.
- Use the syntax explained above to replace 'c' with 'x' in the variable word
- Output the updated word to console

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:05:52.337Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {

  string word = "Ocygen";
  word[ 1 ] = 'x';      //remember that index begins from 0
  cout << word ;

  
}

```

---

[View on CodeChef](https://www.codechef.com/problems/STR6V2)