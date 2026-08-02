# LCPPCL45

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### String length

Listen

We can use the  **`length()`**  function to get the length of a `string`.

For example:

```
string s = "hello";
int a = s.length(); // a now stores the length of s

```

### Task

Write a program which does the following:

- Create a variable text and assign it the string "Programming".
- Use the length() function to output to the console the number of characters in text.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:00:22.361Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {

    string text = "Programming";
    cout << "The length of the word is: " << text.length();
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL45)