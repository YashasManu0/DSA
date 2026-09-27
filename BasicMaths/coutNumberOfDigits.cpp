#include<bits/stdc++.h>

using namespace std;
int cnt(int n) {

    int c = 0;

    for(int i = n; i > 0; i = i / 10) {
        c++;
    }

    return c;
}
int main() {

    int n = 5544;

    cout << cnt(n);

    return 0;
}