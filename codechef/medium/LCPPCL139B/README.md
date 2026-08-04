# LCPPCL139B

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Inline Functions

In C++, an  **inline**  function is a function that is expanded in line when it is called. This means that instead of performing a typical function call, where the control is transferred to the function's code, the compiler replaces the function call with the actual code of the function. This can potentially make the program run faster by eliminating the overhead associated with function calls.

#### Why Use Inline Functions?
- Performance Improvement: For small functions, the overhead of a function call can be significant. Inline functions eliminate this overhead.
- Readability and Maintainability: By using inline functions, you can keep your code clean and readable while avoiding the drawbacks of macros.
#### How to Define an Inline Function

To define an inline function, you use the `inline` keyword before the function definition. Here's the basic syntax:

```
inline returnType functionName(parameters) {
    // function body
}

```

#### Example of an Inline Function

Let's look at an example. Suppose we have a function that adds two numbers:

```
#include <iostream>

// Define an inline function
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);  // Call the inline function
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}

```

In this example, the `add` function is defined as an inline function. When the compiler sees a call to `add(5, 3)`, it replaces the function call with the actual code `return a + b;`.

#### When to Use Inline Functions
- Small Functions: Inline functions are most effective for small, frequently called functions. If the function is large, the overhead of function calls becomes negligible compared to the execution time of the function's code.
- Performance-Critical Code: Use inline functions in performance-critical sections of your code where every bit of optimization matters.
#### When Not to Use Inline Functions
- Large Functions: If a function is large, inlining it can increase the size of the binary significantly, potentially causing issues with cache performance and memory usage.
- Recursive Functions: Inline functions should not be used for recursive functions, as inlining would cause an infinite inlining loop.
#### Important Point to Remember
- Inline is a Request, Not a Command: The inline keyword is a request to the compiler, not a command. The compiler may choose to ignore the request if it decides that inlining is not beneficial.
### Task
- Write a program that takes two numbers, $a$ and $b$, as user input and calculates the value of the expression $(a + b)$2 using an inline function.
### Sample 1:
Input
Output

```
2 3
```

```
25
```

### Explanation:

(2 + 3)2 = 52 = 25

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T09:40:53.045Z  

```c_cpp
#include<iostream>
using namespace std;

// Inline function to calculate (a + b)^2
inline int abSquared(int a, int b){
    int c = a*a + b*b + 2*a*b;
    return c;
}

int main(){
    int a, b;
    cin >> a >> b;
    int expression_value = abSquared(a, b);
    
    // Print the variable containing the result, not the function name
    cout << expression_value << endl;
    
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPCL139B)