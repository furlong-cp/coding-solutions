# LCPPCL04B

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Need of double

Listen

Similarly to int and long, we previously saw that float is used to store decimal values and double is used to store bigger decimal values. Let's see exactly how big.
A float can store up to 7 significant decimal digits accurately. It can store bigger values but not accurately. The value will not be precise. To store bigger values accurately, we use double which can store up to 16 significant decimal digits

### Fixed and setprecision modifiers
- Run the code in the code editor and observe the output.
- In the first line you see a number in scientific notation(9.15235e+06). With big decimal numbers the program generally outputs it in scientific notation. We can change this using fixed modifier(Observe line 7). This allows us to output numbers in fixed-point notation which we are generally familiar with.
- Usually in fixed-point notation we get 6 digits after the decimal point. This can also be changed by the setprecision modifier(Observe line 8). We can define how many digits we want after the decimal point. Observer in the code editor we set this value to 9 which allows us to get 9 digits after the decimal point.
### Task
- As you can observe in the output the digits after the decimal point are getting overflowed as the number is too big for a float.
- Change the datatype of the variable to double to accurately store the number and submit the program.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-01T18:20:52.963Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    double num = 9152345.6789118;
    cout<<num<<endl;
    cout<<fixed<<num<<endl;
    cout<<setprecision(9)<<num<<endl;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL04B)