#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d = {10, 20, 30};

    // Add
    d.push_front(5);
    d.push_back(40);

    // Access
    cout << d[2] << endl;

    // Front and back
    cout << d.front() << endl;
    cout << d.back() << endl;

    // Print
    for(auto it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    // Remove
    d.pop_front();
    d.pop_back();

    for(int x : d)
    {
        cout << x << " ";
    }

    return 0;
}