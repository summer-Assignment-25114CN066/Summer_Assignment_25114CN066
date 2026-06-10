// Write a program to Print character pyramid. 
//  A
//  ABA
//  ABCBA
// ABCDCBA
// ABCDEDCBA



#include <bits/stdc++.h>
using namespace std;

int main() {
    for(char i ='A';i<='E';i++){
        for(char j ='D';j>=i;j--){
              cout<<" ";}
        
        for (char k='A';k<=(i)-1;k++){cout<<k;}
         for (char k=(i);k>='A';k--){cout<<k;}
        cout<<endl;
    }
    return 0;
}