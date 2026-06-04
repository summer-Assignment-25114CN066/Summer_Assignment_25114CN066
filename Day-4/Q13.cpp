//Write a program to Generate Fibonacci series.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter the number toal terms required :";
    cin>>a;
    int p=0,q=1;
    for (int i = 0;i<a;i++ ){
        cout<<p<<" ";
        int next = p+q;
        p=q;
        q=next;
        
        
    }
}