#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> cars;
    cars.push("bolero");
    cars.push("scorpio");
    cars.push("centro");
    cars.push("maruiti");
    cars.push("ignis");
    cars.push("xuv");

    cout << "first elem: " << cars.front() << endl;
    cars.pop();
    cout << "first elem: " << cars.front() << endl;
    cout << "last elem: " << cars.back() << endl;
    cout << "is it empty: " << cars.empty() << endl;
    return 0;
}