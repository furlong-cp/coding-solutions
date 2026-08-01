# LCPPCL04F

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Ascii

Listen

In the previous sub-module we learned about type conversion and observed how characters when converted to integers had a specific value. We observed that when we converted 'C' to integer it gave 67 and when we converted 68 to character it gave 'D'.
This is because each character has an integer value also known as it's ASCII value.

 **Note:**  Since lower case letters and upper case letters are different characters they have different ascii values.

Run the code the observe the ascii values of different characters.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-01T18:25:58.941Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"a->"<<int('a')<<endl;
    cout<<"b->"<<int('b')<<endl;
    cout<<"c->"<<int('c')<<endl;
    cout<<"..."<<endl;
    cout<<"z->"<<int('z')<<endl;
    cout<<endl;
    cout<<"A->"<<int('A')<<endl;
    cout<<"B->"<<int('B')<<endl;
    cout<<"C->"<<int('C')<<endl;
    cout<<"..."<<endl;
    cout<<"Z->"<<int('Z')<<endl;
    cout<<endl;
    cout<<"0->"<<int('0')<<endl;
    cout<<"1->"<<int('1')<<endl;
    cout<<"2->"<<int('2')<<endl;
    cout<<"..."<<endl;
    cout<<"9->"<<int('9')<<endl;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL04F)