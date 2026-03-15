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
    // nice one is this this one
    return 0;
}
