// Write a program to Reverse a string. 

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    getline(cin,s);
    int size = s.size();
    cout<<"The reverse string is : ";
    for(int i = size-1;i>=0;i--){
        
        cout<<s[i];
    }
}