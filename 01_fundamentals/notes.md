# C++ Fundamentals

## Topics to Cover

### 1. C++ Program Structure & Namespaces

**Namespace** - A declarative region that provides scope to identifiers (variables, functions, classes) to avoid naming conflicts.

```cpp
#include <iostream>

namespace farhan {
    int age = 55;
}

namespace burhan {
    int age = 25;
}

int main() {
    std::cout << farhan::age;  // Output: 55
    return 0;
}
```

**Scope Resolution Operator (::)** - Accesses members within a namespace.

**When to Use Namespaces:**
- Large programs with 10+ files
- Team projects (prevents naming conflicts)
- Example: `teamA::log()` vs `teamB::log()`

**Best Practices with std:**
```cpp
// ✓ Best: Use scope resolution
std::cout << "Hello";

// ✓ Safe: Import specific members
using std::cout;
using std::endl;

// ✗ Avoid in real projects: full namespace import
using namespace std;  // Can cause conflicts
```

**Namespace Aliases:**
```cpp
namespace v = veryLongNamespaceName;
std::cout << v::x;
```

---

### 2. Data Types

Data types specify what kind of data a variable stores, memory size, value range, and allowed operations.

| Type | Size | Range | Purpose |
|------|------|-------|---------|
| `int` | 4 bytes | -2,147,483,648 to 2,147,483,647 | Whole numbers |
| `float` | 4 bytes | ~6-7 significant digits | Decimal values (single precision) |
| `double` | 8 bytes | ~15-16 significant digits | Decimal values (double precision) |
| `char` | 1 byte | -128 to 127 | Single character |
| `bool` | 1 byte | true / false | Logical values |

**Signed vs Unsigned:**
- **Signed**: Stores positive and negative values
- **Unsigned**: Stores only non-negative values (0 to 4,294,967,295 for 32-bit)

**Overflow**: When a value exceeds the range, it wraps around using modulo arithmetic.

---

### 3. Type Casting

Converting one data type to another.

---

### 4. Input / Output

```cpp
std::cout << "Output";   // Display
std::cin >> variable;    // Input
```

---

### 5. Operators

| Category | Operators |
|----------|-----------|
| Arithmetic | `+` `-` `*` `/` `%` |
| Relational | `==` `!=` `>` `<` `>=` `<=` |
| Logical | `&&` `\|\|` `!` |
| Assignment | `=` `+=` `-=` `*=` `/=` `%=` |
| Increment/Decrement | `++` `--` |
| Bitwise | `&` `\|` `^` `~` `<<` `>>` |
| Ternary | `?:` |

---

### 6. Control Statements

- `if`, `else if`, `else`
- `switch` case statements
- Loops: `for`, `while`, `do-while`

#### For Loops

**Traditional For Loop (Index-Based)**
```cpp
for(int i = 0; i < cars.size(); i++) {
    cout << cars[i] << endl;
}
```
- `i = 0` → Start from first index
- `i < cars.size()` → Loop until last element
- `i++` → Move to next index
- `cars[i]` → Access element using index

**Range-Based For Loop**
```cpp
for (string car : cars) {
    cout << car << "\n";
}
```
- Cleaner syntax: `for (datatype variable : container)`
- Automatically iterates through each element without manual indexing

#### While Loop

```cpp
while (condition) {
    // Code executes while condition is true
}
```

#### Do-While Loop

```cpp
do {
    // Code executes at least once
} while (condition);
```
- Executes the block first, then checks the condition
- Useful when you need at least one iteration

---

### 7. Functions

Reusable blocks of code.

**Inline Functions** - Code is inserted directly at the call site, avoiding function call overhead.
```cpp
inline int add(int a, int b) {
    return a + b;
}
```
*Note: Compiler decides whether to actually inline based on function complexity.*

With an inline function, when you call it:

The code of the function is inserted directly at the point of the call.

It does not jump to the function definition elsewhere like a normal function does.

So, the CPU executes the function code right there, avoiding the overhead of a regular function call.

Think of it like copy-pasting the function’s code wherever you call it.

But remember: the compiler decides whether to actually inline it. If the function is too big or complex, the compiler may still treat it like a normal function.

---

### 8. Default Arguments

Functions can have default parameter values.

---

### 9. Function Overloading

Multiple functions with the same name but different parameters.

---

### 10. Struct

User-defined composite data type grouping variables and functions.

