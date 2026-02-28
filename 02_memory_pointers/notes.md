## Pointers

A pointer is a variable that stores a memory address (the location in RAM where another variable lives). Instead hlding value, it stores address, we can dereference to get value from address.


**How it works:**
- `&` (address-of operator): Gets the memory address of a variable
- `*` (dereference operator): Accesses the value at that address

```cpp
int x = 10;           // x is stored at some memory address
int* ptr = &x;        // ptr stores the ADDRESS of x
std::cout << *ptr;    // prints 10 (the VALUE x holds)
```

---

## Pointer Arithmetic

Pointers can move through memory by incrementing/decrementing them. This is useful for arrays.

```cpp
int arr[] = {10, 20, 30};
int* ptr = arr;       // ptr points to first element (10)
ptr++;                // ptr now points to second element (20)
std::cout << *ptr;    // prints 20
```

**Note:** `ptr++` moves by the size of the data type (4 bytes for `int`).

---

## References

A reference is like a nickname or alias for a variable. Once created, it cannot change or be null.

```cpp
int x = 5;
int& ref = x;         // ref is an alias for x
ref = 10;             // this changes x to 10 (not just ref)
```

**Key difference from pointers:** References are safer (can't be null) and simpler to use.

---

## Dynamic Memory Allocation

Use `new` to request memory at runtime (instead of compile-time). Always use `delete` to free it.

```cpp
int* ptr = new int(42);  // request memory for one integer
delete ptr;              // release the memory back to the system
ptr = nullptr;           // best practice: clear the pointer
```

---

## Dangling Pointer (Avoid This!)

A dangling pointer points to memory that has already been freed. Using it causes undefined behavior.

```cpp
int* ptr = new int(5);
delete ptr;            // memory is freed
std::cout << *ptr;     // ERROR! ptr is now dangling (invalid)
```

---

## Smart Pointers (Safer Alternative)

Smart pointers automatically manage memory for you—no manual `delete` needed.
**Why smart pointers**
In normal dynamic memory allocation: If you forget delete, memory leaks.
Smart pointers automatically delete memory when it’s no longer needed.

```cpp
std::unique_ptr<int> ptr(new int(10));

syntax:
#include <memory>
std::unique_ptr<int> ptr;
// Memory is freed automatically when ptr goes out of scope
```

**Benefit:** Eliminates dangling pointers and memory leaks.

nice one

