// Write a program to Print number pyramid.
//  1
//  121
//  12321
// 1234321
// 123454321


#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int i =1;i<=5;i++){
        for(int j =4;j>=i;j--){
              cout<<" ";}
        
        for (int k=1;k<=(i)-1;k++){cout<<k;}
         for (int k=(i);k>=1;k--){cout<<k;}
        cout<<endl;
    }
    return 0;
}