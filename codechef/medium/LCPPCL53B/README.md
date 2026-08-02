# LCPPCL53B

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Substring

A substring is a small part of a string.
For example:
"World" is a substring of the string "Hello World!"
In C++, the `substr()` is a string function which is used to extract a substring from a given string.

We takes two values:

- the starting index of the substring
- the number of characters in the substring

```
string str = "Hello, World!";
cout<<str.substr(7, 5);

```

This outputs

```
World

```

It goes to the seventh index which is 'W' and takes 5 characters starting from 'W', which results in 'World'.
We can even give only the starting index to the substr function.
In that case it will start from the starting index and go till the end of the string.

```
string str = "Hello, World!";
cout<<str.substr(5);

```

This outputs

```
, World!

```

as it starts from the fifth index which is ',' and goes till the end of the string.

Please note that if we provide invalid starting index, the program will throw an error.

### Task
- Update the given code in IDE to print fruit.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:07:28.322Z  

```c_cpp
// Update the code below this line
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "jackfruit";
    cout << s.substr(4,5);
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL53B)