// Write a program to Check palindrome string.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"Enter the string :";
    cin>>s;
    int size = s.size();
    for(int i =0;i<size/2;i++){
    if(s[i]!=s[size -i-1]){
        cout<<"This is not a palindrome string";
    return 0;}
     }
      cout<<"This is a Palindrome String ";
    return 0;
}