#include <iostream>
using namespace std;

// define a struct
struct Student {
    string name;
    int age;
    float marks;
};

int main() {
    // create a struct variable
    Student s1;

    // assign values
    s1.name = "Farhan";
    s1.age = 19;
    s1.marks = 95.5;

    // access values
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}

/*
A struct (structure) is a user-defined data type that lets you group different types of variables together under one name.
It is like a box that can hold different items:
    int, float, string, etc.
    All related to one entity
- we use it:
    To group related data together
    Makes code organized and readable
*/