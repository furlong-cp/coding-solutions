# LCPPCL46

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Printing Characters From a String

Listen

We can access the characters in a `string` by referring to its `index number` inside square brackets  **[ ]**.
We use the concept of indexing which means every character in a `string` corresponds to a number called the `index number`.

 **Note:** 

- Indexing always starts from $0$ when going left to right.
- So the first character of a string s is s[0], the second is s[1], and so on.
### Task
- Update the given code in IDE to print the characters o and r (with a space between them) from the string using indexing.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:03:57.835Z  

```c_cpp
// replace the underscores ( _ ) with correct index numbers
#include <bits/stdc++.h>

using namespace std;

int main() {

    string word = "Programming";
    cout << word[2] << " " << word[4];
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL46)