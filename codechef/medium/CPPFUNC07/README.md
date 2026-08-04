# CPPFUNC07

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Variable scope

Listen

Scope in Cpp can be broadly categorized into two types: `global scope` and `local scope`

#### Global scope
- Variables and functions defined outside of any function or class have global scope.
- These entities can be accessed from anywhere in the code, both inside and outside functions or classes.

```
#include <iostream>
using namespace std;

int globalVar = 10;

void myFunction() {
    cout << globalVar << endl;  // Accessing the global variable
}

int main() {
    cout << globalVar << endl;  // Accessible here
    myFunction();  // Accessible here
    
}

```

#### Local scope
- Variables defined within a function have local scope, meaning they are accessible only within that function.
- Local scope is limited to the function where the variable is defined.

```
#include <iostream>
using namespace std;

void myFunction() {
    int localVar = 20;  // Local variable
    cout << localVar << endl;  // Accessible here
}

int main() {
    cout << localVar << endl;  // Error: 'localVar' was not declared in this scope
    myFunction();
    
}

```

#### Accessing Variables from Different Scopes
- A function can access variables in its local scope, as well as variables in the global scope.
- However, a local variable will take precedence over a global variable if they have the same name.
### Task:
- Global Scope: Define a global variable globalVar and assign it the value 10.
- Local Scope: In a function named displayScopes, define a local variable localVar and assign it the value 20.
- Printing: Inside the displayScopes function, print the values of both the local variable localVar and global variable globalVar.
- Main Function: In the main function, call the displayScopes function to demonstrate the usage of global and local variables.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T09:32:13.855Z  

```c_cpp
#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

void displayScopes() {
    // Local variable
    int localVar = 20;

    // Accessing and printing both the global variable and local variable
    cout << localVar << endl;   // Should print 20
    cout << globalVar << endl; // Should print 10
}

int main() {
    // Calling the function
    displayScopes();

    // Accessing and printing the global variable
    // cout << globalVar << endl; // Should print 10

    // Trying to access the local variable here would cause an error as it's out of scope
    // cout << localVar << endl; // Uncommenting this line would cause a compilation error
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CPPFUNC07)