# PPSC100

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Nested loops best practices

Listen

Nested loop best practices are essential to ensure code readability and efficiency.
Let's look at the code used to generate the right angled triangle.

```
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input for the number of rows
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("* "); // Print star
        }
        printf("\n"); // Print newline after each row
    }
    return 0;
}

```

#### Best Practices:
- Clear Indentation: Properly indent nested loops to improve code readability. Indent each inner loop one level from its outer loop.
- Avoid Unnecessary Nesting: Use nested loops only when needed.
- Efficiency Considerations: For this simple pattern, efficiency is not a concern. However, if you're dealing with a large number of iterations, you might need to optimize the loops or consider alternative solutions.
### Task

Write a program to take a positive integer input  **N**  from console and print the square of stars of side length  **N**.

### Sample 1:
Input
Output

```
6
```

```
 **   **   **  
 **  
 **  
 **  
 **  
 **   **   **  

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T09:11:42.568Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

}
```

---

[View on CodeChef](https://www.codechef.com/problems/PPSC100)