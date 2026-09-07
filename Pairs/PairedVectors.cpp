#include<bits/stdc++.h>
#include<utility>
#include <bits/basic_string.h>
using namespace std;
void vectorpairs(){
    vector<pair<int,string>> vp;
    int n;

    cout << "Enter number of pairs: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int number;
        string text;
        cin >> number >> text;
        vp.emplace_back(number, text);
    }

    cout << "vector pairs\n";
    for (const auto& item : vp) {
        cout << item.first << " " << item.second << '\n';
    }
}

int main(){
    cout<<endl;
    vectorpairs();
}