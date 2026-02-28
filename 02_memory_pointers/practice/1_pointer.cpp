#include <iostream>
#include <memory>
using namespace std;
int pointer()
{
    int a = 123;
    cout << &a << "\n"; // store address of a
    int *y = &a;        // dereferrence the value stored at a address
    cout << *y;
}
int arr()
{
    // Pointers can move through memory by incrementing/decrementing them. This is useful for arrays.
    int nums[] = {12, 23, 34, 45, 45};
    int *ptr = nums;
    ptr++;
    cout << ptr;
}

int reference()
{
    // A reference is like a nickname or alias for a variable. Once created, it cannot change or be null.
    // Key difference from pointers: References are safer (can't be null) and simpler to use.
    int x = 10;
    int &ref = x; // ref isn't new variable, it's alias of x.
    ref = 20;
    cout << x << "\n";
    cout << ref << "\n";
}
int dynamicMemory()
{
    // int *a = new int(42); // allocates memory for 1 integer
    // delete a;           // release the memory back to the system
    // a = nullptr;        // best practice: clear the pointer

    int n;
    cout << "Enter size: ";
    cin >> n;
    int *arr = new int[n]; // dynamic array
    for (int i = 0; i < n; i++)
    {
        arr[i] = i * 10;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr; // important for arrays
    return 0;
}
int danglingPointer()
{
    // A dangling pointer points to memory that has already been freed. Using it causes undefined behavior.
    int *ptr = new int(5);
    delete ptr;        // memory is freed
    std::cout << *ptr; // ERROR! ptr is now dangling (invalid)
}
int smartPointer()
{
    unique_ptr<int> p1 = make_unique<int>(10);
    cout << *p1 << endl;
    // unique_ptr<int> p2 = p1; ❌ Error (cannot copy)
    unique_ptr<int> p2 = move(p1); // ✅ Ownership transferred
    return 0;
    // When p2 goes out of scope → memory is automatically deleted.

    // with move() p2 owns the memory.
    // p1 becomes empty (null).
    // Only p2 will delete the memory.
    // when we transfer ownership, old one becomes null pointer. we CANNOT Dereference It like cout<< *p1
}

int main()
{
    // pointer();
    // arr();
    // reference();
    // dynamicMemory();
    // danglingPointer();
    smartPointer();
}
