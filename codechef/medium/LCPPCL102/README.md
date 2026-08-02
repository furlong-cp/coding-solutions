# LCPPCL102

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Debug the code - 4

Listen

Chef is looking to buy a TV and has shortlisted two models.
The first one costs A rupees, while the second one costs B rupees.
Since there is a huge sale coming up on Chefzon, Chef can get a flat discount of C rupees on the first TV, and a flat discount of D rupees on the second one.
Help Chef determine which of the two TVs would be cheaper to buy during the sale.

### Input Format
- The first and only line of each test case contains four space-separated integers A, B, C and D — the marked price (in rupees) of the first TV, the marked price (in rupees) of the second TV, the flat discount (in rupees) of the first TV, and the flat discount (in rupees) of the second TV.
### Output Format

For each test case, print a single line containing the string First if the first TV is cheaper to buy with discount, or Second if the second TV is cheaper to buy with discount. If both of them cost the same after discount, print Any.

### Constraints
- 1 ≤ A, B ≤ 100
- 0 ≤ C ≤ A
- 0 ≤ D ≤ B
### Sample 1:
Input
Output

```
85 75 35 20
```

```
First
```

### Sample 2:
Input
Output

```
100 99 0 0
```

```
Second
```

### Sample 3:
Input
Output

```
30 40 0 10
```

```
Any
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-02T05:51:46.306Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    float p = a - c; 
    float q = b - d; 
    if(p<q){
       cout<<"First"<<endl;
    }
    else if(p>q){
       cout<<"Second"<<endl;
    }
    else if(p==q) {
       cout<<"Any"<<endl;
    }
    
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL102)