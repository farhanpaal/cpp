#include <iostream>
#include <list>
#include <string>
// remove last & add last: pop_back(), push_back(45)
// remove first & add first: pop_front(), push_front(83)
using namespace std;

int main()
{
    // we can't access using index, but we can access first and last using .front() .back() func
    list<string> cars = {"volvo", "scorpio", "lamborghini", "Buggati"};
    // print all:
    for (string car : cars)
    {
        cout << car << " - ";
    }

    cars.front() = "bolero"; // change(replace) first element.
    cout << "print first element:" << cars.front() << endl;

    // remove last element
    cars.pop_back();
    for (string car : cars)
    {
        cout << car << " - ";
    }
    cout << endl;

    // Add last element
    cars.push_back("revx");
    for (string car : cars)
    {
        cout << car << " - ";
    }
    cout << endl;
    cout << "List Size: " << cars.size();

    return 0;
}