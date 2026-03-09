// A constructor is a special method automatically called when an object is created.
// We can also declare constructor outside class like methods
// remember we don't use void with constructors

#include <iostream>
using namespace std;

class School
{
public:
    string name;
    int students;
    School(string x, int y); // declaration
    // School(string x, int y)
    // {
    //     name = x;
    //     students = y;
    // }
};

School::School(string x, int y) // constructor definition
{
    name = x;
    students = y;
}
int main()
{
    School school1("School Name: MMI ", 334);
    cout << school1.name << "| students: " << school1.students;
    return 0;
}