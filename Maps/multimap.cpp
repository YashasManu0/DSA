#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> mm;

    // Insert
    mm.insert({1, "Apple"});
    mm.insert({2, "Banana"});
    mm.insert({1, "Mango"});
    mm.insert({1, "Orange"});
    mm.insert({3, "Grapes"});

    // Print everything
    cout << "Multimap:\n";

    for(auto x : mm)
    {
        cout << x.first << " → "
             << x.second << endl;
    }

    // Count key 1
    cout << "\nCount of key 1: "
         << mm.count(1) << endl;

    // Find
    auto it = mm.find(2);

    if(it != mm.end())
    {
        cout << "Key 2 value: "
             << it->second << endl;
    }

    // Get all values for key 1
    cout << "\nValues for key 1:\n";

    auto range = mm.equal_range(1);

    for(auto i = range.first; i != range.second; i++)
    {
        cout << i->second << endl;
    }

    return 0;
}