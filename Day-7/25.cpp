// Write a program to Recursive factorial
#include <bits/stdc++.h>
using namespace std;

int factorial(int r){
    if(r<=1){
        return 1;
    }
        return r*factorial(r-1);
}

int main(){
    int n;
    cout<<"Enter the value";
    cin>>n;
    int result = factorial(n);
    cout<<result;
}