// Write a program to Remove spaces from
// string.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"Enter the string :";
    getline(cin,s);
    s.erase(remove(s.begin(),s.end(),' '),s.end());
    
    
    cout<<"String without the spaces : ";
    for(char c:s){
        cout<<c;

    }
    return 0;
}