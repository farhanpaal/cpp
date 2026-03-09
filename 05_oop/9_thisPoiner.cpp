// The "this pointer" is a pointer that points to the current object in that class.

#include <iostream>
using namespace std;

class Student
{
public:
    int age; // ← class variable (member variable)

    void setAge(int age) // (member variable)
    {
        this->age = age; // We have two variables named age. To refer to the member variable instead of the parameter, we use this.
    }

    void display()
    {
        cout << "Age: " << age << endl;
    }
};

class Reactangle
{
public:
    int leng;
    int wid;
    void areaR(int leng, int wid)
    {
        this->leng = leng;
        this->wid = wid;
    }
    void result()
    {
        cout << "Area:" << leng * wid;
    }
};

int main()
{
    // Student s1;
    // s1.setAge(19);
    // s1.display();

    Reactangle rect1;
    rect1.areaR(2, 4);
    rect1.result();
}