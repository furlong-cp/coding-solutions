# LCPPCL04H

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Converting upper case characters to lower case

Listen

As we saw in the previous problems we can perform arithmetic operations on characters. Since the ascii values of characters are in the same order as the characters of both lower case and upper case characters, we can even convert upper case letters to lower case letters.
The ascii values of upper case letters lies between 65 and 90 with 65 being 'A' and 90 being 'Z'.
Similarly the ascii values of lower case letters lies between 97 and 122. With 97 being 'a' and 122 being 'z'.
Thus, we can convert 'A'(65) to 'a'(97) by adding 32.

```
char ch = 'A';
cout<<char(ch+32)<<endl;

```

This will output

```
a

```

We don't need to remember this value to be added to convert a upper case letter to lower case.
This is just the difference between the ascii values of lower case letters and their upper case counter-parts.
Observe the code in the code editor to see how we can calculate this difference and use it to convert a letter from upper case to lower case.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-01T18:33:24.102Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch = 'D';
    char lower_case = char(ch + 32);
    cout<<lower_case<<endl;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL04H)