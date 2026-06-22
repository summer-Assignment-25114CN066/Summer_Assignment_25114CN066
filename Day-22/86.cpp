// Write a program to Count words in a
// sentence.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"Enter the string :";
    getline(cin,s);
    s.erase(remove(s.begin(),s.end(),' '),s.end());
    int size = s.size();
    cout<<"The number of words in the string : "<<size;
    return 0;
}