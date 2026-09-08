#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    //If you don't know the number of elements beforehand, you can use:

    vector<int> vv;
    int x;

    while(cin >> x) {
        vv.push_back(x);
    }

    cout << "Stopped!\n";

    for(int i : vv) {
        cout << i << " ";
    }
    return 0;
}