// A friend function is a function that is not a member of a class but is allowed to access the private and protected members of that class.

// Normally: private data → only accessible inside class

// But with a friend function, we allow an external function to access it.

#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 10;
    }

    friend void showLength(Box b); // friend declaration
};

void showLength(Box b) {
    cout << "Length: " << b.length;
}

int main() {
    Box obj;
    showLength(obj);
}