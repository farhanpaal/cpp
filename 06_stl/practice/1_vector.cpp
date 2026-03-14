#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> myCars = {"hayabusa", "lambo"};

    for (string car : myCars)
    {
        cout << car << " ";
    }
    // nice one is this
    return 0;
}
