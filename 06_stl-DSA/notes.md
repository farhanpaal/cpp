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

## What is vector?
A vector in C++ is like a resizable array.

Both vectors and arrays are data structures used to store multiple elements of the same data type.

The difference between an array and a vector, is that the size of an array cannot be modified (you cannot add or remove elements from an array). A vector however, can grow or shrink in size as needed.

To use a vector, you have to include the <vector> header file:
```
#include <vector>
```

To create a vector, use the vector keyword, and specify the type of values it should store within angle brackets <> and then the name of the vector, like: vector<type> vectorName.

Example:
```vector<string> cars;```
## Access Vector Element
You can access a vector element by referring to the index number inside square brackets [].

Vectors, like arrays, are 0-indexed, meaning that [0] is the first element, [1] is the second element, and so on:

Example
```vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};```

 Get the first element
```cout << cars[0];```  // Outputs Volvo

 Get the second element
```cout << cars[1];```  // Outputs BMW

# Benefit of Vector
One advantage of using the vector library, is that it includes many useful functions. For example, you can access the first or the last element of a vector with the ```.front```() and ```.back()``` functions:

Example
```vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};```

// Get the first element
```cout << cars.front();```

// Get the last element
```cout << cars.back();```

## Access using ```at()```
To access an element at a specified index, you can use the .at() function and specify the index number:

Example:
```vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};```

// Get the second element
```cout << cars.at(1);```

// Get the third element
```cout << cars.at(2);```
- Note: The .at() function is often preferred over square brackets [] because it lets you know if an error occurs.

For example if the element is out of range:

Example
// Create a vector called cars that will store strings
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Try to access an element that does not exist (throws an error message)
cout << cars.at(6);

## Change Vector element
To change the value of a specific element, you can refer to the index number:

Example:
```vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};```

// Change the value of the first element
```cars[0] = "Opel";```

```cout << cars[0];  ```// Now outputs Opel instead of Volvo
However, it is safer to use the .at() function:

Example
```vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};```

// Change the value of the first element
```cars.at(0) = "Opel";```

```cout << cars.at(0);  ```// Now outputs Opel instead of Volvo

## Add Vector Elements
The biggest difference between a vector and an array is that vectors can grow dynamically. That means you can add or remove elements from the vector.

To add an element to the vector, you can use the ```.push_back()``` function, which will add an element at the end of the vector:

Example:
```vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};```
```cars.push_back("Tesla");```
You can add as many elements as you want:

Example
```vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};```

```cars.push_back("Tesla");```

```cars.push_back("VW");```

```cars.push_back("Mitsubishi");```

```cars.push_back("Mini")```

## Remove Vector Elements
To remove an element from the vector, you can use the ```.pop_back()``` function, which removes an element from the end of the vector:

```vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};```

```cars.pop_back();```

Note: Elements are usually only added and removed from the end of the vector. If you need to add or remove elements from both ends, it is often better to use a deque instead of a vector.

## Check if a Vector is Empty
There is also a function to find out whether a vector is empty or not.

The ```.empty()``` function returns 1 (true) if the vector is empty and 0 (false) if it contains one or more elements:

Example

```vector<string> cars;```

```cout << cars.empty();  ```// Outputs 1 (The vector is empty)

Example
```vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};```

```cout << cars.empty();```  // Outputs 0 (not empty)

## Loop Through a Vector
You can loop through the vector elements by using a for loop combined with the ```.size()``` function:

Example

```vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};```
```
for (int i = 0; i < cars.size(); i++) {
  cout << cars[i] << "\n";
}
```

You can also use a for-each loop (introduced in C++ version 11 (2011), which is cleaner and more readable:

Example

```
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
for (string car : cars) {
  cout << car << "\n";
}
```
Tip: It is also possible to loop through vectors with an iterator, which we will learn in a later chapter.

## What is LIST
A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.
However, two major differences between lists and vectors are:

- You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.

- Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.

include list library ```#include <list>```

- create a list:
To create a list, use the list keyword, and specify the type of values it should store within angle brackets <> and then the name of the list, like: ```list<type> listName```.
```
list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

for (string car : cars) {
  cout << car << "\n";
}
```

- Access a List: We can't access with index, but using .front() .back() functions we can access first and last element 

- change element ```    cars.front() = "bolero";  // change first element.```

- Add Elements to list: use ```.pop()``` to insert an element at the beginning of the list and ```.push_back()``` to add an element at the end

- Remove Elements to list: use ```.pop_front()``` to remove an element at the beginning of the list and ```.pop_back()``` to remove an element at the end

- Check if list is empty using ```list.empty()```

# What is stack
A stack stores multiple elements in a specific order, called LIFO.
- LIFO stands for ```Last in, First Out.``` .
- Unlike vectors, elements in the stack are not accessed by index numbers. Since elements are added and removed from the top, you can only access the element at the top of the stack.
- Include library ```#include <stack>```
- Create a Stack ```stack<type> stackName.```
- ```stack<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};```

- We cant add elements to stack at the time of decleration like in vectors like stack<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

- Add elements using ```.push()``` function:
```
stack<string> cars;

cars.push("Volvo");
cars.push("BMW");
cars.push("Ford");
cars.push("Mazda");
```Top element will be 'Mazda' and last will be volvo```
```

- Access Stack Elements: we can't access stack elements using index, in stack we can only access top element using ```.top()``` function
```cout << cars.top();  // Outputs "Mazda"```

- Change top element: ```cars.top() ="bolero";```

- Remove element: We can remove using ```.pop()``` function, it will remove the last element which was added

- Note: We can't iterate stack.

## What is Queue
A queue stores multiple elements in a specific order, called FIFO. FIFO stands for First in, First Out.
Unlike vectors, elements in the queue are not accessed by index numbers. Since queue elements are added at the end and removed from the front, you can only access an element at the front or the back.

- include library ``` #include <queue>```
- create queue ```queue<string> cars;```
- We cannot add elements to the queue at the time of declaration, like we can with vectors.
- __Add Element__ ```.push()``` it adds element at the end of queue
```
queue<string> cars;

cars.push("Volvo");
cars.push("BMW");
cars.push("Ford");
cars.push("Mazda");
// volvo first and mazda last
```
- __Access Queue Elements__ We can access with index, we can access only first or last using ```.front() - .back() respectively```
- __remove__ using ```.pop()``` This will remove the front element (the first and oldest element that was added to the queue): 
- __size__ using ```.size()```
- __check empty__ ```.empty()```


## What is Priority Queue

A priority queue is a special type of queue where:
 - Elements are not processed in insertion order
 - Instead, the element with the highest priority is removed first
  👉 By default in C++:
  - The largest element has the highest priority (Max Heap)
- __Analogy:__ Hospital emergency room 🏥 - Patients with more serious conditions are treated first — not the ones who arrived first.

```
#include <queue>
using namespace std;

priority_queue<int> pq;
```

- Insert: ```pq.push(10);```
- Access top (highest priority): ```cout << pq.top();  // Output: 30```
- Remove top: ```pq.pop();  // Removes 30```
- Check empty: ```pq.empty();```

Note: By default it's MAX heap
- To make min heap use ```greater<int>```
```priority_queue<int, vector<int>, greater<int>> pq;```

## What is Deque?
A deque (stands for double-ended queue) 
As we know, elements in a queue are added at the end and removed from the front.

*But Deque is more flexible, as elements can be added and removed from both ends (at the front and the back). You can also access elements by index numbers.*

- Include library ```include <deque>```
- add elements ```deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};```
- Access Deque using index  ```cout << cars[0]; ``` // Outputs Volvo
- We can access the first or the last element of a deque with the ```.front()``` and ```.back()``` functions.
- Access elements with index use ```.at()``` 
 *Note: The ```.at()``` function is often preferred over square brackets [] because it throws an error message if the element is out of range:*

- Change deque elements using [], however it's safer to use ```at()```: 
```
deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Change the value of the first element
cars[0] = "Opel";

cout << cars[0];  // Now outputs Opel instead of Volvo
```
- Add deque elements: use ```.push_front()``` and ```.push_back``` to add elements
- remove deque elements: use ```.pop_front()``` and ```.pop_back``` to remove elements
- Loop through deque using for loop or for-each

## What are sets?
A set stores unique elements where they:
```
- Are sorted automatically in ascending order.
- Are unique, meaning equal or duplicate values are ignored.
- Can be added or removed, but the value of an existing element cannot be changed.
- Cannot be accessed by index numbers, because the order is based on - sorting and not indexing.
```

- Include library ```#include <set>```
- create set ```set<string> cars;``` or ```set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};```
- __Note:__ If we print them in loop, output will always be in order.

- Sort a Set in Descending Order: use ```greater<type>``` functor : like ```set<int, greater<int>> numbers ={2,5,3,9,77,34,2} ```
```
// Sort elements in a set in descending order
set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};

for (int num : numbers) {
  cout << num << "\n";
}
```
- If we will try to add any element twice, one element will be ignored

- __add elements__ : use ```.insert("elemName")```
- __remove elements__ : use ```.erase("elemName")```
- __remove all elements__ : use ```.clear()```

- Access: Do dereference, then access first and last using ```.begin()``` - ```.rbegin()``` .
```
cout << *cheez.begin() << endl;
cout << *cheez.rbegin();
```

## What is multiset
A multiset is A collection of elements, Automatically sorted, Allows duplicates.
- Declare: ```multiset<int> ms;```
- ```.insert()`` used to add elements
- Print elements
```
for (auto x : ms)
    cout << x << " ";
```
- __count duplicates__ ```cout << ms.count(10);```  // how many times 10 appears
- __Erase__ ```.erase(10)``` Remove all 10s, ```ms.erase(ms.find(10));``` remove only one.

## What is an Unordered set.
An unordered_set: Stores unique elements only, No sorting, Very fast (O(1)) operations
- include library ```#include <unordered_set>```
- declare ```unordered_set<int> us;```
- __Insert__ ```us.insert(10);```
- __find__ 
find(value) tries to search for that value inside the container.
  - If found → returns iterator pointing to that element
  - If NOT found → returns end()
  
end() means: “Position just AFTER the last element”. It does NOT point to a real element

```  
    if (us.find(10) != us.end())
      cout << "Found";
```
## What is Map?
A map stores elements in "key/value" pairs.
Elements in a map are:
 - Accessible by keys (not index), and each key is unique.
 - Automatically sorted in ascending order by their keys.
- Include library ```#include <map>```
- Create Mao ```map<keytype, valuetype> mapName```
- People map: ```map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };```
- Access a Map: Using key in square braces. ```cout << "John is: " << people["John"] << "\n";```
  *We can also access using .at() function* ```cout << "Adele is: " << people.at("Adele") << "\n";```
- Change Values: ```people["John"] = 50;```
- Add elements: Use square braces or .insert() function.
```
people.insert({"Jenny", 22});
people["Anja"] = 30;
```
- A map cannot have elements with equal keys. Values can be equal. 
- Remove elements using ```.erase()```
- Remove all using ```.clear()```
- __Loop__ We can do, but remember
  You can loop through a map with the for-each loop. However, there are a couple of things to be aware of:

  - Use the auto keyword (introduced in C++ version 11) inside the for loop. - This allows the compiler to automatically determine the correct data type for each key-value pair.
  - Since map elements consist of both keys and values, we have to include ```.first``` to access the keys, and ```.second``` to access values in the loop.
  - Elements in the map are sorted automatically in ascending order by their keys:
  ```
  map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

  for (auto person : people) {
    cout << person.first << " is: " << person.second << "\n";
  }
  ```
- Reverse using ```greater<type>``` function.
  ```
  map<string, int, greater<string>> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };
  for (auto person : people) {
    cout << person.first << " is: " << person.second << "\n";
  }

  The output will be:
  John is: 32
  Bo is: 29
  Adele is: 45
  ```

## multimap (duplicate keys + sorted)
  It's part of the ordered map family, Stores multiple values for the same key. Keys are sorted automatically (ascending order by default). Implemented using a balanced tree (like Red-Black Tree)
  ```
  #include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> mm;
    mm.insert({1, "A"});
    mm.insert({1, "B"});
    mm.insert({2, "C"});

    for (auto &p : mm) {
        cout << p.first << " " << p.second << endl;
    }
}
```

## unordered_map (no duplicate or sorted, fast)
It uses a hash table, Stores unique keys only (no duplicates), No ordering of elements
```
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> um;
    um[1] = "A";
    um[2] = "B";
    um[1] = "C"; // overwrites value

    for (auto &p : um) {
        cout << p.first << " " << p.second << endl;
    }
}
```

## What are Iterators
Iterators are used to access and iterate through elements of data structures (vectors, sets, etc.), by "pointing" to them.
It is called an "iterator" because "iterating" is the technical term for looping.

eg:
``` 
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Create a vector iterator called it
vector<string>::iterator it;

// Loop through the vector with the iterator
for (it = cars.begin(); it != cars.end(); ++it) {
  cout << *it << "\n";
}
```
  - First we create a vector of strings to store the names of different car manufactures.
 - Then we create a "vector iterator" called it, that we will use to loop through the vector.
 - Next, we use a for loop to loop through the vector with the iterator. The iterator (it) points to the first element in the vector (cars.begin()) and the loop continues as long as it is not equal to cars.end().
 - The increment operator (++it) moves the iterator to the next element in the vector.
 - The dereference operator (*it) accesses the element the iterator points to.

**What is begin() and end()?**
begin() and end() are functions that belong to data structures, such as vectors and lists. They do not belong to the iterator itself. Instead, they are used with iterators to access and iterate through the elements of these data structures.

```begin()``` returns an iterator that points to the first element of the data structure.
```end()``` returns an iterator that points to one position after the last element.
 - end() points to one position after the last element in the vector (meaning it doesn't point to an actual element, but rather indicates that this is the end of the vector). 
  - So, to use end() to point to the last element in the cars vector (Mazda), you can use cars.end() - 1

**Why do we say "point"?**

Iterators are like "pointers" in that they "point" to elements in a data structure rather than returning values from them. They refer to a specific position, providing a way to access and modify the value when needed, without making a copy of it. For example:

```
// Point to the first element in the vector
it = cars.begin();

// Modify the value of the first element
*it = "Tesla";

// Volvo is now Tesla
```

**The auto Keyword**

In C++ 11 and later versions, you can use the auto keyword instead of explicitly declaring and specifying the type of the iterator.

_The auto keyword allows the compiler to automatically determine the correct data type, which simplifies the code and makes it more readable_

- Instead of this:

  - ```vector<string>::iterator it = cars.begin();```
   You can simply write this:

  - ```auto it = cars.begin();```
 In the example above, the compiler knows the type of it based on the return type of cars.begin(), which is vector<string>::iterator.

**For-Each Loop vs. Iterators**
We can use a for-each loop to just loop through elements of a data structure and read them, like this:
Example
```
// Create a vector called cars that will store strings
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Print vector elements
for (string car : cars) {
  cout << car << "\n";
}
```

Note: when you need to add, modify, or remove elements during iteration, iterate in reverse, or skip elements, you should use iterators:

Example
```
// Create a vector called cars that will store strings
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Loop through vector elements
for (auto it = cars.begin(); it != cars.end(); ) {
  if (*it == "BMW") {
    it = cars.erase(it); // Remove the BMW element
  } else {
    ++it;
  }
}

// Print vector elements
for (const string& car : cars) {
  cout << car << "\n";
}
```

**Iterate in Reverse**

To iterate in reverse order, you can use ```rbegin()``` and ```rend()``` instead of ```begin()``` and ```end()```:

Example
```
// Iterate in reverse order
for (auto it = cars.rbegin(); it != cars.rend(); ++it) {
  cout << *it << "\n";
}
```

Iterators are great for code reusability since you can use the same syntax for iterating through vectors, lists, deques, sets and maps:

```
List Example
// Create a list called cars that will store strings
list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Loop through the list with an iterator
for (auto it = cars.begin(); it != cars.end(); ++it) {
  cout << *it << "\n";
}
```
**Loop through map with an iterator**
```
// Create a map that will store strings and integers
map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

// Loop through the map with an iterator
for (auto it = people.begin(); it != people.end(); ++it) {
  cout << it->first << " is: " << it->second << "\n";
}
```

## Algorithms

Another important feature of iterators is that they are used with different algorithm functions, such as sort() and find() (found in the ``<algorithm>`` library), to sort and search for elements in a data structure.

For example, the sort() function takes iterators (typically returned by begin() and end()) as parameters to sort elements in a data structure from the beginning to the end.

In this example, the elements are sorted alphabetically since they are strings:
```
#include <iostream>
#include <vector>
#include <algorithm>  // Include the <algorithm> library
using namespace std;

int main() {
  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Sort cars in alphabetical order
  sort(cars.begin(), cars.end());

  // Print cars in alphabetical order
  for (string car : cars) {
    cout << car << "\n";
  }

  return 0;
}
```