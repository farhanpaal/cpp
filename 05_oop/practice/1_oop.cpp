#include <iostream>
using namespace std;

class myClass // here i created class, we always create it using class keyword
{
public:              // access specifier, members are accessible from outside
    int myNum;       // attribute
    string myString; // attribute
};

int main()
{
    myClass myObj; // created object of class
    myObj.myNum = 24;
    myObj.myString = "hello";

    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;

    return 0;
}