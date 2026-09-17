#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    // Insert
    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(10);

    // Print
    cout << "Set: ";

    for(int x : s)
    {
        cout << x << " ";
    }

    cout << endl;

    // Find
    if(s.find(20) != s.end())
    {
        cout << "20 exists" << endl;
    }

    // Count
    cout << "Count of 30: " << s.count(30) << endl;

    // Size
    cout << "Size: " << s.size() << endl;

    // Erase
    s.erase(20);

    cout << "After erase: ";

    for(int x : s)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}