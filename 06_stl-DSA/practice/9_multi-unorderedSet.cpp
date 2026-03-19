#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    multiset<int> nums = {23, 46, 33, 46, 1};
    nums.insert(12);
    nums.insert(32);
    // cout << *nums.begin();
    // nums.erase(nums.find(46));
    for (auto num : nums)
    {
        cout << num << endl;
    }
    cout << endl;
    // check if element is there
    if (nums.find(46) != nums.end())
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
    cout<<endl;
    unordered_set<int> rolls = {2, 3,1000, 66, 11, 2, 89, 3};
    for (auto num : rolls)
    {
        cout << num << endl;
    }
    return 0;
}