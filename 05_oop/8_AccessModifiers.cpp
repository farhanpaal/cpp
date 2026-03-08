// Access modifiers control how class members (attributes and methods) can be accessed.

// public:	Accessible from outside the class
// private:	Cannot be accessed from outside the class
// protected:	Cannot be accessed from outside, but accessible in inherited classes

#include <iostream>
class names
{
public:
    int x;

private:
    int y;
};
int main()
{
    names Name;
    Name.x = 34;
    // Name.y=67; // error, because y is in private modifier
}