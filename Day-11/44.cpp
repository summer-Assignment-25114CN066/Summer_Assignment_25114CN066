// Write a program to Write function to find
// factorial.




#include <bits/stdc++.h>
using namespace std;

int fact(int a){
    if (a>1){
        int b;
    b =a-1;
    return a*fact(b);
}}


int main() {
    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<fact(n);
    
    return 0;
}