// Inheritance is a mechanism in OOP where one class acquires the properties and behaviors (data members and member functions) of another class.

// in below program there is multi level inheritance used

#include <iostream>
using namespace std;

class father1
{
public:
    string name = "Mr Maha";
    int age = 34;
};

class father2
{
public:
    string name = "Mr Darvesh";
    int age = 21;
};

class son : public father1, public father2
{
};

class grandson : public son
{
public:
    void display()
    {

        cout << "name of my grandfather1 is " << father1::name << endl;
        cout << "name of my grandfather1 is " << father2::name;
    }
};

int main()
{
    grandson gran;
    gran.display();
    return 0;
}