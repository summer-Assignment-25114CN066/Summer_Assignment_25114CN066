// Write a program to Character frequency. 
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"Enter the string :";
    getline(cin,s);
    map<char,int>mpp;
    for(auto c:s){
    mpp[c]++;
    }
    for(auto it: mpp){
        cout<<it.first<<"   "<<it.second<<endl;
    }
    return 0;
}


