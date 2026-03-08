// methods are the functions inside classes
// in this file i have used two methods, one declared inside class and another outside

#include <iostream>
using namespace std;

class test
{
public:
    void myDetails()  //method1
    {
        cout << "I am man" << endl;
    }
    void myName(); //method2
};

void test::myName()
{
    cout << "My name is soldier";
}

int main()
{
    test Test1;
    Test1.myDetails();
    Test1.myName();
}