// Write a program to Convert lowercase to
// uppercase.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    getline(cin,s);
    string s1;
    int size = s.size();
    cout<<"The lower case to upper case string is : ";
    for(int i = 0;i<size;i++){
        s1[i] = toupper(s[i]);
        cout<<s1[i];
    }
}