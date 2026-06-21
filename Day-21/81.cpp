// Write a program to Find string length
// without strlen()
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    getline(cin,s);
    int size=0;
    for(char it : s){
        
        size++;
    }
    cout<<"The size of the string is :"<<size;
}