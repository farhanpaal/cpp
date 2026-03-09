// Create a Dog class with a bark() method, that prints "Woof!". Call it from main().

#include <iostream>
using namespace std;

class Dog
{
public:
    void bark(string sound)
    {
        cout << sound;
    }
};
int main()
{
    Dog doggy;
    doggy.bark("woff");
    return 0;
}