#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> people;
    people.push("teh");
    people.push("mah");
    people.push("fat");
    people.push("ruh");
    people.push("sus");

    cout <<"top element: "<< people.top() <<endl;
    people.top()="fat";
    cout <<"top element: "<< people.top()<<"\n";

    // stack isn't iterable, but we can print its elements
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