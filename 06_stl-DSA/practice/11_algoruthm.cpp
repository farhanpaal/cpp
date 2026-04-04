#include <iostream>
// header files
#include <vector>
// #include <iterator>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <map>

using namespace std;
int main()
{

    stack<int> numbers;
    numbers.push(3);
    numbers.push(4);
    numbers.push(5);
    numbers.push(6);
    while (!numbers.empty()) {
        cout << numbers.top();
        numbers.pop();
    
    }

    return 0;
}