//Write a program to Find x^n without pow(). 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,n,sum=0;
     cout<<"Enter the base value";
     cin>>x;
     cout<<"Enter the exponent value";
     cin>>n;
     int temp =1;
if(n==0){cout<<"1";}
if(n==1){cout<<x;}     
if(n>1){
     for(int i=1;i<=n;i++){
        temp = temp*x;
        // sum += temp;

     }}
    cout<<temp;
}