#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    multimap<int, string> roll;
    roll.insert({1,"hi"});
    roll.insert({2,"boss"});
    roll.insert({1,"tech"});
 
    for (auto i : roll)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}