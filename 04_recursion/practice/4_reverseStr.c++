// reverse the string

#include <iostream>
using namespace std;

string reverseString(string str) {
    if (str.length() <= 1) return str;      // base case
    return reverseString(str.substr(1)) + str[0];  // recursive step
}

int main() {
    string s = "hello";
    cout << reverseString(s);  // Output: olleh
    return 0;
}