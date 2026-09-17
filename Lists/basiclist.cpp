#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30};

    // Add at end
    l.push_back(40);

    // Add at beginning
    l.push_front(5);

    // Print
    cout << "List: ";

    for(auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    // First and last
    cout << "Front: " << l.front() << endl;
    cout << "Back: " << l.back() << endl;

    // Size
    cout << "Size: " << l.size() << endl;

    // Remove first
    l.pop_front();

    // Remove last
    l.pop_back();

    cout << "After pop: ";

    for(int x : l)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}