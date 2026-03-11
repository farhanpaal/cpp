# 📚 STL and Data Structures

## What is a Data Structure?
Data structures organize and store data efficiently. An **array** is a simple example that stores multiple elements in one variable.

C++ offers many data structures through the **C++ STL** (Standard Template Library), each optimized for different use cases.

---

## 🔧 What is STL?

**STL** is a powerful library providing:
- 📦 **Data Structures** - Store data efficiently
- ⚙️ **Algorithms** - Solve problems by manipulating data

Choosing the right data structure and algorithm significantly improves performance, especially with large datasets.


---

## 📋 STL Containers Overview

| Container | Purpose | Access | Order |
|-----------|---------|--------|-------|
| **Vector** | Dynamic array | By index | Sequential |
| **List** | Linked list | Sequential only | Sequential |
| **Stack** | LIFO structure | Top only | Last In, First Out |
| **Queue** | FIFO structure | Front/Back | First In, First Out |
| **Deque** | Double-ended queue | By index | Both ends |
| **Set** | Unique elements | Not indexed | Sorted/Unique |
| **Map** | Key/value pairs | By key | Sorted keys |

### Header Files
```cpp
#include <vector>   // Vector library
#include <list>     // List library
#include <set>      // Set library
#include <map>      // Map library
#include <stack>    // Stack library
#include <queue>    // Queue library
```

### Vector Example
```cpp
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

for (string car : cars) {
    cout << car << "\n";
}
```

**Traditional array:** `int numbers[5] = {10, 20, 30, 40, 50};`  
**Using vectors:** `vector<int> numbers = {10, 20, 30, 40, 50};`

---

## Key Concepts of STL

The STL consists of three main components:

- **Containers** - Data structures (vectors, lists, etc.) that store data
- **Iterators** - Objects used to access elements of a data structure
- **Algorithms** - include functions, like sort() and find(), that perform operations on data structures through iterators.

In Computer Science, data structures and algorithms go hand in hand. A data structure is not worth much if you cannot search through it or manipulate it efficiently using algorithms, and algorithms are not worth much without a data structure to work on.
DSA data structures and Algorithm
---

## 📦 Containers

- Vector
- Pair
- List
- Stack
- Queue
- Deque
- Set
- Map
- Priority Queue
- Multiset
- Unordered Set
- Multimap
- Unordered Map

## 🔗 Iterators

- `begin()`, `end()`
- Reverse iterators

## ⚙️ Algorithms

- `sort()`
- `reverse()`
- `count()`
- `find()`
- `binary_search()`
- `lower_bound()`
- `upper_bound()`
- `max_element()`
- `min_element()`
- `accumulate()`
- `next_permutation()`
