#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    // Add elements
    s.push(10);
    s.push(20);
    s.push(30);

    // Top
    cout << "Top: " << s.top() << endl;

    // Size
    cout << "Size: " << s.size() << endl;

    // Remove top
    s.pop();

    cout << "New top: " << s.top() << endl;

    // Check empty
    if(s.empty())
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Stack is not empty";
    }

    return 0;
}