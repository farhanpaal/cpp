#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    // it will be printed in ascending order
    set<string> phones{"micromax", "8", "nokia", "sony", "redmi", "4", "apple"};
    for (string mobile : phones)
    {
        cout << mobile << " - ";
    }

    cout << endl;

    // it will be printed in ascending order
    set<int> roll{4, 7, 3, 88, 9, 334, 67, 0};
    for (int num : roll)
    {
        cout << num << " - ";
    }

    cout << endl;

    // print decending order
    set<int, greater<int>> numbers = {33, 51, 32, 1, 6, 7};
    for (int num : numbers)
    {
        cout << num << " - ";
    }

    cout << endl;

    set<string, greater<string>> naams = {"paal", "3", "daal", "maal", "1", "aal", "8"};
    for (string naam : naams)
    {
        cout << naam << " - ";
    }

    // insert, erase, clear
    set<string> cars{"maruiti", "centro", "bolero"};
    for (string car : cars)
    {
        cout << car << " - ";
    }

    cout << endl
         << "insert: ";

    cars.insert("buggati");
    for (string car : cars)
    {
        cout << car << " - ";
    }

    cout << endl
         << "erase: ";

    cars.erase("centro");
    for (string car : cars)
    {
        cout << car << " - ";
    }

    cout << endl
         << "clear: ";

    cars.clear();
    for (string car : cars)
    {
        cout << car << " - ";
    }
    cout << endl;

    // access first and last using dereference
    set<string> cheez = {"maruiti", "centro", "bolero"};
    cout << *cheez.begin();
    cout << *cheez.rbegin();

    return 0;
}