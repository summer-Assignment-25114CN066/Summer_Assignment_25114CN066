//Write a program to Print factors of a number. 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }

    }
}