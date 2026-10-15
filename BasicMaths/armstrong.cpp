#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=371;
    int dup=n;
    int sum=0;
    int ld=0;
    while(n>0){
        ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;
    }
    if(sum==dup){
        cout<<"armstrong";

    }else{
        cout<<"not armstrong";
    }
    return 0;
}