// Write a program to Print character triangle.
// A
// AB
// ABC
// ABCD
// ABCDE
#include <bits/stdc++.h>
using namespace std;

int main(){
    for(char i ='A'; i<='E'; i++){
        for(char j = 'A'; j<=i;j++){
        cout<<j;
        }cout<<endl;
    }
}

// You can't use string for increment and decrement but you can you char for increment and decrement to produce any series of alphabetic pattern or series.