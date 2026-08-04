# CPPFUNC08

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Function within a function

Listen

In C++, a function can call other functions; this concept is similar to defining a function within a function in Python.

You are tasked with implementing two functions, square and squareAndDouble, and demonstrating function calling in C++.

Check the sample code given below

```
// Function to calculate the square of a number
int square(num){
    return num * num
}
// Function to calculate the square of a number and then double the result
int square_and_double(num){
    // Call the square function to calculate the square of the input number
    int squared = square(num)
    // Double the squared result
    return 2 * squared
}
// Call the square_and_double function with the argument 3
int result = square_and_double(3)

cout << "Result: " << result << endl;    // Output will be 'Result: 18'

```

### Task

Create the code to print the Final result.

### Sample 1:
Input
Output

```
 
```

```
Final Result: HELLO, ALICE!

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T09:33:42.142Z  

```c_cpp
#include <iostream>
#include <string>  // For using string functions
#include <algorithm>  // For using transform function
using namespace std;

// Function to print the greeting
void printGreeting(const string& name) {

    // Convert the greeting to uppercase
    string upperGreeting = "Hello, " + name + "!";

    // converts the string to uppercase
    transform(upperGreeting.begin(), upperGreeting.end(), upperGreeting.begin(), ::toupper);

    // Print the final result
    cout << "Final Result: " << upperGreeting << endl;

}

int main() {
    // The name to be used in the greeting
    string name = "Alice";
    
    printGreeting(name);


    
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CPPFUNC08)