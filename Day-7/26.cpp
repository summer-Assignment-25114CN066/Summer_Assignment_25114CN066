//Write a program to Recursive Fibonacci
#include <bits/stdc++.h>
using namespace std;

int fib(int f){
       if (f == 0 || f == 1){
       return 1;
       }
    return fib(f-1) + fib(f-2);

}

int main(){
    int n;
    cout<<"Enter the value";
    cin>>n;
    for(int i =0;i<n;i++){
    cout<<fib(i)<<" ";
}}