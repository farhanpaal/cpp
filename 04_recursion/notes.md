## Topics to cover

### Note there are some advanced topics which I didn't touch here. If you want to go into data structures you may find them there
Recursion is when a function calls itself to solve a problem by breaking it down into smaller, simpler versions of the same problem.

Every recursive function has two key parts:

Base case: A condition that stops the recursion (the simplest version of the problem)
Recursive case: The function calling itself with a simpler input
Simple example: Calculate factorial


```
int factorial(int n)
{
    // Base case: stop here
    if (n == 0 || n == 1)
        return 1;
    
    // Recursive case: call itself with n-1
    return n * factorial(n - 1);
}
```
### Base Case & Stack Memory
A base case stops recursion. Without it, the function calls itself infinitely, filling the stack until it crashes.

```cpp
// Good: has base case
int factorial(int n) {
    if (n == 0) return 1;  // Base case
    return n * factorial(n - 1);
}

// Bad: no base case - infinite recursion
int badFactorial(int n) {
    return n * badFactorial(n - 1);  // Stack overflow!
}
```

### Recursive Tree Understanding
A recursive tree shows how function calls branch. Each level represents a call, showing the execution flow.

```cpp
// factorial(4) creates this tree:
//        factorial(4)
//             |
//        factorial(3)
//             |
//        factorial(2)
//             |
//        factorial(1)
//             |
//        factorial(0) → returns 1

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
```

### Backtracking
Backtracking explores all possibilities, then undoes choices to try alternatives. Used for puzzles and combinations.

Backtracking is used when we have multiple solutions and we want all those solutions.
If thwew are 3 students(2 boys , 1 girl) and 3 chairs, we have to arrange them. So how many ways can we arrange them. We can do in 3! means 6 ways.. 
To find all possible solutions, we will draw solution tree (state space tree)
The problems which we try to solve with backtracking, they have some constraints.  Like girl shouldn't sit in middle chair

 

### Tail Recursion
The recursive call is the last operation. Can be optimized by compilers into loops.

```cpp
// Tail recursive
int tailSum(int n, int acc = 0) {
    if (n == 0) return acc;
    return tailSum(n - 1, acc + n);  // Last operation is recursive call
}

// Non-tail recursive
int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);  // Addition happens after recursive call
}
```