// Write a program to Find first non-repeating
// character.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count = 0;
    cout<<"Enter the string";
    getline(cin,s);
    for(auto ch:s){

    for(auto c:s){
    if(ch == c) count++;
    
    }
    if(count==1){ cout<<"Find first non-repeating character : "<<ch;
    return 0;
    }
    }
}