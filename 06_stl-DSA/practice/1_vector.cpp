#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> countries = {"India", "Pakistan", "China"};
    cout << countries.back() << " - ";

    countries.push_back("ghana");
    cout << countries.back() << " - ";

    countries.pop_back();
    cout << countries.back() << " - ";

    cout << countries.at(1) <<endl;

    for (string country : countries)
    {
        cout << country << " - ";
    }

    return 0;
}