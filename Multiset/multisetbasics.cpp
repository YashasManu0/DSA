#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;

    // Insert
    ms.insert(30);
    ms.insert(10);
    ms.insert(20);
    ms.insert(20);
    ms.insert(10);

    // Print
    cout << "Multiset: ";

    for(int x : ms)
    {
        cout << x << " ";
    }

    cout << endl;

    // Count
    cout << "Count of 20: "
         << ms.count(20) << endl;

    // Find
    auto it = ms.find(20);

    if(it != ms.end())
    {
        cout << "20 exists" << endl;
    }

    // Remove ONE occurrence
    if(it != ms.end())
    {
        ms.erase(it);
    }

    cout << "After removing one 20: ";

    for(int x : ms)
    {
        cout << x << " ";
    }

    cout << endl;

    // Remove ALL 10s
    ms.erase(10);

    cout << "After removing all 10s: ";

    for(int x : ms)
    {
        cout << x << " ";
    }

    return 0;
} 