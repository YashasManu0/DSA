#include<bits/stdc++.h>
using namespace std;
void vp(){

    vector<pair<int,int>> v;

    int x, y;

    while(cin >> x && cin >> y){
        v.push_back({x, y});
    }

    for(auto it : v){
        cout << it.first << " " << it.second << endl;
    }
}

int main(){
    vp();
    return 0;
}