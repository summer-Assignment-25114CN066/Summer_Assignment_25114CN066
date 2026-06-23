// Write a program to Find first repeating
// character.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    getline(cin,s);
    for(auto ch:s){
        int count = 0;

    for(auto c:s){
    if(ch == c) count++;
    
    }
    if(count>1){ cout<<"Find first repeating character : "<<ch;
    return 0;
    }
    }
}