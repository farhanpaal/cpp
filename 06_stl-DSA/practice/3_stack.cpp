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
    cout <<"top element: "<< people.top();

    

    return 0;
}