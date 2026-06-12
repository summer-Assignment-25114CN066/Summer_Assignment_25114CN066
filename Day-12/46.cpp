// Write a program to Write function for
// Armstrong.
#include <bits/stdc++.h>
using namespace std;

string arm(int n){
    int temp=n;
    string s = to_string(n);
    int len = s.length();



    int arms = 0;
while(n>0){
    int lastdigit = n%10;
    arms = arms + pow(lastdigit,len);
    n = n/10;
}
    if(temp==arms){
        return "Yes";
    }
    else return "No";
}

int main() {
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<arm(n);
    return 0;
}