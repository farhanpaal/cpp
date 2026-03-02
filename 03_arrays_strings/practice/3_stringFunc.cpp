#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "Hello World";
    string str2 = "C++";

    // Length / Size
    cout << "Length: " << str.length() << endl;
    cout << "Size: " << str.size() << endl;

    // Character Access
    cout << "operator[]: " << str[0] << endl;
    cout << "at(): " << str.at(1) << endl;
    cout << "front(): " << str.front() << endl;
    cout << "back(): " << str.back() << endl;

    // Concatenation
    string concat = str + " " + str2;
    cout << "operator+: " << concat << endl;
    str.append(" Programming");
    cout << "append(): " << str << endl;

    // Substring
    cout << "substr(): " << str.substr(0, 5) << endl;

    // Searching
    cout << "find(): " << str.find("World") << endl;

    // Modification
    string temp = "Hello";
    temp.replace(0, 5, "Hi");
    cout << "replace(): " << temp << endl;
    string ins = "Hello";
    ins.insert(5, " There");
    cout << "insert(): " << ins << endl;
    string er = "Hello";
    er.erase(1, 2);
    cout << "erase(): " << er << endl;

    // Comparison
    cout << "compare(): " << str.compare("Hello World Programming") << endl;

    // Utility
    string test = "Test";
    cout << "empty(): " << test.empty() << endl;
    test.clear();
    cout << "After clear(), empty(): " << test.empty() << endl;

    // Conversion
    cout << "stoi(): " << stoi("123") << endl;
    cout << "to_string(): " << to_string(456) << endl;

    // C-style Support
    const char *c_str_val = str.c_str();
    cout << "c_str(): " << c_str_val << endl;

    // From <algorithm>
    string rev = "Hello";
    reverse(rev.begin(), rev.end()); //begin points to first char from address.
    cout << "reverse(): " << rev << endl;

    return 0;
}