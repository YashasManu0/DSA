#include<bits/stdc++.h>
#include<utility>
#include <bits/basic_string.h>

using namespace std;

void ppairs(){
    cout<<"Pairs representation";
    cout<<endl;
    pair<int, int> p={10,20};
    cout<<p.first<<" ";
    cout<<p.second;
    pair<int,pair<int, int>> nested={1,{2,3}};
    cout<<endl;
    cout<<nested.first;
}

int main(){
    ppairs();
    cout<<endl;
}