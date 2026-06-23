// Write a program to Find maximum occurring
// character.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"Enter the string";
    getline(cin,s);
    
    unordered_map<char,int>mpp;
    for(auto c:s){
        mpp[c]++;
    }
    char max_value = 'a';
    int max_freq  = -1;
    for(auto it : mpp){
    if(it.second>max_freq){
    max_value = it.first;
    max_freq  = it.second;    
    }}
    cout<<"The number which has maximum freq : "<<max_value;
    
    return 0;
}