#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for ( int i = n; i > 0 ; i-- ) {
            for ( int j = i; j > 0 ; j-- ){
                cout << "*";
            }
        cout << endl;
    }
}

void pattern2(int n){
    for ( int i = 1; i <= n ; i++ ) { //5-1=4 
            for ( int j = 1; j <= n-i+1 ; j++ ){
                cout << j;
            }
        cout << endl;
    }
}

void pattern3(int n){
     for ( int i = 0; i < n ; i++ ) {
            for ( int j = 0; j < n-i-1 ; j++ ){
                cout << "_";
            }
            for ( int t = 0; t < 2*i+1; t++ ){
                cout<<"*";
            }
        cout << endl;
    }
}

void pattern4(int n){
     /*for ( int i = 1; i<=n ; i++) {
            for ( int j = 1; j <= i ; j++ ){
                cout << "_";
            }
            for ( int t=i-1; t<2*n-i;t++) {
                cout<<"*";
            }

        cout << endl; 
    }*/

    for ( int i = 0; i<n ; i++) {
            for ( int j = 0; j < i ; j++ ){
                cout << "_";
            }
            for ( int t=i; t<2*n-i-1;t++) {
                cout<<"*";
            }

        cout << endl; 
    }
}

void pattern5(int n){
    for (int i =0; i<n; i++){
        for (int j=0; j<n-i; j++ ){
            cout<<" ";
        }
        for (int k=0; k<=(i*2);k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for (int i =0; i<n; i++){
        for (int j=0; j<n-i; j++ ){
            cout<<" ";
        }
        for (int k=0; k<=(i*2);k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for( int t=n;t>=0;t--){
        for (int m=n; m>t; m--){
            cout<<" ";
        }
        for (int l=(t*2); l>=0; l--){
                cout<<"*";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=0; i<2*n-1; i++){
        if(i<=n){
            for(int j=0; j<i;j++){
                cout<<"*";
            }
            cout<<endl;
        }else{
            for(int t=0;t<2*n-i-1;t++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}

void pattern8(int n){
    int start=1;
    for(int i=0; i<n; i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0; j<=i; j++){
                cout<<start;
                start=1-start;
        }
        cout<<endl;
    }
}

void pattern9(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<j;
        }
        for(int t=1; t<=(n-i)*2; t++){
            cout<<" ";
        }
        for(int m=i; m>=1; m--){
            cout<<m;
        }
        cout<<endl;
    }

}

void pattern10(int n){
    int var=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<var<<" ";
            var++;
            
        }
        cout<<endl;
    }
}

void pattern11(int n){
    for(int i = 0; i < n * 2; i++) {

        if(i < n) {

            // Left stars
            for(int j = 0; j < n-i; j++) {
                cout << "*";
            }

            // Middle space
            for(int j = 0; j < 2*i; j++) {
                cout << " ";
            }

            // Right stars
            for(int j = 0; j < n-i; j++) {
                cout << "*";
            }

            cout << endl;
        }
        else {

            // Left stars
            for(int j = 0; j <= i-n; j++) {
                cout << "*";
            }

            // Middle space
            for(int j = 0; j < 2*(2*n-i-1); j++) {
                cout << " ";
            }

            // Right stars
            for(int j = 0; j <= i-n; j++) {
                cout << "*";
            }

            cout << endl;
        }
    } 
}         

void pattern12(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<=('A'+i);j++){
            cout<<j;
        }
        cout<<endl;
    }

}

void pattern13(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<=('A'+(n-i-1));j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    char c='A';
    for(int i=0; i<n; i++){
        for(char j=0;j<=(i);j++){
            cout<<c;
        }
        c++;
        cout<<endl;
    }
}

void pattern15(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<(n-i)-1;j++){
            cout<<"_";
        }
        char c='A';
        for(char t=0; t<i*2+1;t++){
            cout<<c;
            if(t<(2*i+1)/2){
                c++;
            }else{
                c--;
            }
        }
        cout<<endl;
    }
}

void pattern16(int n){
    char c='E';
    for(int i=0; i<n; i++){
        for(char j=c; j<=c+i; j++){
            cout<<j;
        }
        c--;
        cout<<endl;
    }
}

void pattern17(int n){
    for(int i=0; i<(n*2)-1; i++){
        if(i<n){
            for(int j=0; j<=i;j++){
                cout<<"*";
            }
            for(int t=0; t<(2*n)-(i*2+2); t++){
                cout<<" ";
            }
            for(int m=0; m<=i; m++){
                cout<<"*";
            }
            cout<<endl;
        }else{
            for(int j=0; j<(n*2)-i-1; j++){
                cout<<"*";
            }
            for(int t=0; t<=((i*2+1)-n*2);t++){
                cout<<" ";
            }
            for(int m=0; m<(n*2)-i-1; m++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}

void pattern18(int n){
    for(int i=1; i<n; i++){
        if(i==1 || i==n-1){
            for(int j=1; j<n; j++){
                cout<<"* ";
            }
        }else{
            for(int j=0; j<=n;j++){
                if(j==0){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            for(int j=0; j<1;j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void pattern19(int n){
    for(int i = 0; i < 2*n-1; i++) {
        for(int j = 0; j < 2*n-1; j++) {

            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int down = (2*n - 2) - i;

            cout << (n - min(min(top, down), min(left, right)))<<" ";
        }
        cout << endl;
    }

    
}

void pattern20(int n){
    char c='D';
    for(int i=0;i<n;i++){
        for(char j='A'; j<'A'+n-i; j++){
            cout<<j;
        }
        if(i==0){
            for(char d='A'+n-2
                ; d>='A';d--){
                cout<<d;
            }
        }else{
            for(int t=0; t<i*2-1;t++){
                cout<<"_";
            }
            for(char d='A'+n-i-1; d>='A';d--){
                cout<<d;
            }
        }


        cout<<endl;
    }
    
}
int main(){
    int n=5;
    pattern20(n);
    
}