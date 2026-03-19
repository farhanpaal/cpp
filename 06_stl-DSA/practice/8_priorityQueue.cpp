#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> marks;
    marks.push(34);
    marks.push(22);
    marks.push(222);
    marks.push(42);
    cout << marks.top();  // 222

    cout << "------------------";

    queue<int> marksQueue;
    marksQueue.push(34);
    marksQueue.push(22);
    marksQueue.push(222);
    marksQueue.push(42);
    cout << marksQueue.front();  // 34

    cout << "------------------";

    priority_queue<int, vector<int>, greater<int>> Revmarks;
    Revmarks.push(34);
    Revmarks.push(22);
    Revmarks.push(222);
    cout << Revmarks.top();  // 22 (min heap)

    return 0;
}