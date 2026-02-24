// #include <iostream>
// namespace farhan{
//     int age=55;
// }

// namespace burhan{
//     int age=25;
// }
// int main(){
//     std::cout<<farhan::age;
//     return 0;
// }


#include <iostream>
using namespace std;

// Math related functions
namespace mathUtils {
    int add(int a, int b) {
        return a + b;
    }

    int square(int x) {
        return x * x;
    }
}

// Text related functions
namespace textUtils {
    void greet(string name) {
        cout << "Hello, " << name << endl;
    }

    int length(string str) {
        return str.length();
    }
}

int main() {
    cout << mathUtils::add(5, 3) << endl;
    cout << mathUtils::square(4) << endl;

    textUtils::greet("Farhan");
    cout << textUtils::length("Variable") << endl;
    return 0;
}