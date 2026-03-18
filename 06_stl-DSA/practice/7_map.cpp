#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> marks = {{"rohit", 45}, {"Mohit", 43}, {"Raju", 49}};
    cout << marks["rohit"] << endl;
    cout << marks.at("Mohit") << endl;
    marks["Sush"] = 34;
    marks.insert({"maho", 44});

    for (auto mark : marks)
    {
        cout << mark.first << " : " << mark.second << endl;
    }
    marks.erase("Sush");
    cout << endl
         << " - " << endl;
    for (auto mark : marks)
    {
        cout << mark.first << " : " << mark.second << endl;
    }

    // cleared
    marks.clear();
    cout << endl
         << " - " << endl;
    for (auto mark : marks)
    {
        cout << "marks: " << mark.first << " : " << mark.second << endl;
    }
    return 0;
}