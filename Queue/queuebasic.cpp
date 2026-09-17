#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    // Add elements
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    cout << "Size: " << q.size() << endl;

    // Remove front
    q.pop();

    cout << "Front after pop: " << q.front() << endl;

    return 0;
}