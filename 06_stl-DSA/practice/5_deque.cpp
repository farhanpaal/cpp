#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<string> names = {"pala", "bhat", "dar"};
    for (string name : names)
    {
        cout << name << " ";
    }
    cout << endl;

    cout << "first elem: " << names.front() << endl;
    cout << "last elem: " << names.back() << endl;

    names.push_front("shri");
    cout << "first elem: " << names.front() << endl;

    names.pop_back();
    cout << "last elem: " << names.back() << endl;

    cout << "At index 2: " << names.at(2) << endl;
    cout << "At index 3: " << names[3] << endl;

    // at() will show out of range
    // cout << "At index 7: " << names.at(7) << endl;

    names.at(2) = "good";
    for (string name : names)
    {
        cout << name << " ";
    }
    return 0;
}