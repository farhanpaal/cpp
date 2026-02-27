#include <iostream>
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
int main()
{
    // pointer();
    // arr();
    // reference();
    dynamicMemory();
}
