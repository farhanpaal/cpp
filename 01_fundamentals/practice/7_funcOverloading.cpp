#include <iostream>
using namespace std;

// function to add two integers
int add(int a, int b) {
    return a + b;
}

// function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    cout << add(2, 3) << endl;        // calls add(int, int)
    cout << add(2, 3, 4) << endl;     // calls add(int, int, int)
    cout << add(2.5, 3.5) << endl;    // calls add(double, double)
}



/*
Function overloading means having multiple functions with the same name in the same scope, but with different parameter lists (different number or type of parameters).

The compiler decides which function to call based on the arguments you pass.

*/