# LCPPCL139C

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Function Overloading

Listen

Function overloading is a feature in C++ that allows you to create multiple functions with the same name but different parameters. It helps to improve code readability and maintainability by allowing you to use the same function name for different tasks, as long as their parameter lists differ in type or number.

#### Why Use Function Overloading?
- Code Clarity/Oraganization: Using the same name for similar operations makes the code easier to understand and organize code better by grouping similar functionalities under the same name.
- Convenience: It allows you to handle different data types with the same function name, simplifying your code.
- Flexibility: Allows functions to handle different types of input seamlessly.
#### How to Overload a Function

To overload a function, you simply define multiple functions with the same name but different parameter lists. Here are some rules to keep in mind:

- The parameter lists must differ in the number of parameters, their types, or both.
- The return type alone cannot be used to distinguish overloaded functions.
#### Example of Function Overloading

Let’s look at an example where we overload a function named `print`.

```
#include <bits/stdc++.h>
using namespace std;
// Function to print an integer
void print(int i) {
    cout << "Printing int: " << i << std::endl;
}

// Function to print a double
void print(double d) {
    cout << "Printing double: " << d << std::endl;
}

// Function to print a string
void print(std::string s) {
    cout << "Printing string: " << s << std::endl;
}

// Function to calculate area of a square
int area(int side){
    return side * side;
}

// Function to calculate area of a rectangle
int area(int length, int width) {
    return length * width;
}

int main() {
    print(42);           // Calls print(int)
    print(3.14);         // Calls print(double)
    print("Hello!");     // Calls print(string)
    cout << area(9);     // Calls area(int side)
    cout << area(2, 4);  // Calls area(int length, int width)
    return 0;
}

```

In this example, the `print` function is overloaded three times:

- Once to print an integer
- Once to print a double
- Once to print a string

Similarly the `area` function is overloaded two times:

- Once to calculate the area of a square
- Once to calculate the area of a rectangle

Depending on the argument type, the appropriate `print` and `area` function is called.

#### Important Points to Remember
- Parameter List Must Differ: The overloaded functions must have different parameter lists.
- Return Type Doesn’t Matter: Overloading cannot be based on different return types alone.
- Compiler’s Choice: The compiler determines which function to call based on the arguments provided.
### Task
- Write a program that takes three user inputs: a, b, and r, representing the side length of a square, the side length of a cube, and the radius of a circle, respectively.
- Create three overloaded functions to calculate the surface area of the square, the surface area of the cube, and the area of the circle.
- Use these functions to print the area of the square, the surface area of the cube, and the area of the circle on three separate lines.
### Sample 1:
Input
Output

```
2 3 7
```

```
4
54
153.938
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T10:00:50.378Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the area of a square
int area(int side) {
    // Complete the function
    return side * side;
} 

// Overloaded function to calculate the surface area of a cube
int area(int side, bool isCube) {
    // Complete the function
    if (isCube) {
         return 6 * side * side;
    }
    return 0;
}

// Overloaded function to calculate the area of a circle
double area(double radius) {
    // Complete the function
    return 3.14159 * radius * radius;
}

int main() {
    int a, b;
    double r;

    cin >> a;

    cin >> b;

    cin >> r;

    cout << area(a) << endl;
    cout << area(b, true) << endl;
    cout << area(r) << endl;

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL139C)