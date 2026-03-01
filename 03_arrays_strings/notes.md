## Topics to cover
- Static Arrays
- Dynamic Arrays
- Multidimensional Arrays
- Character Arrays and C-Style Strings
- String Manipulation Functions
- Memory Management and Pointers
- Best Practices

### Static Arrays
Arrays with fixed size declared at compile time.

```cpp
int arr[5] = {1, 2, 3, 4, 5};
std::cout << arr[0];  // Output: 1
```

### Dynamic Arrays
Create arrays at runtime using `new`. Always free memory with `delete[]`.

```cpp
int size = 5;
int* arr = new int[size];  // Create array
arr[0] = 10;               // Use it
delete[] arr;              // Free memory (important!)
```

### Multidimensional Arrays
Arrays with multiple dimensions, declared with multiple bracket pairs.

```cpp
int matrix[3][4];           // 3x4 static array
int** dyn = new int*[3];    // Dynamic 2D array
for(int i = 0; i < 3; i++)
    dyn[i] = new int[4];
```

### Character Arrays and C-Style Strings
Strings are `char[]` arrays ending with `\0` (null terminator).

```cpp
char str[] = "Hello";  // \0 added automatically
std::cout << str;      // Output: Hello
```

### String Manipulation Functions
```cpp
#include <cstring>
strlen(str);           // Get length
strcpy(dest, src);     // Copy
strcmp(str1, str2);    // Compare (returns int)
strcat(str1, str2);    // Join strings
```

### Best Practices
- Always use `delete[]` after `new[]`
- Prefer `std::string` over C-style strings
- Use `std::unique_ptr` for safer memory management

