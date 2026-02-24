#include <iostream>
using namespace std;

inline int square(int x) { return x * x; } // inline

int normalSquare(int x) { return x * x; }  // normal function

int main() {
    cout << square(5) << endl;       // compiler may insert code here directly
    cout << normalSquare(5) << endl; // normal function call
}

/*
Both give the same answer ✅

Inline functions can make small functions faster ⏩

But overusing inline functions can make the program bigger 📦
*/