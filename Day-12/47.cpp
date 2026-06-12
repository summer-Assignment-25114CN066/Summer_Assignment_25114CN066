// Write a program to Write function for
// Fibonacci.
#include <bits/stdc++.h>
using namespace std;

void fib(int n){
     int p=0,q=1;
    for (int i = 0;i<n;i++ ){
        cout<<p<<" ";
        int next = p+q;
        p=q;
        q=next;
        
        
    }

}

int main() {
    int n;
    cout<<"Enter the number";
    cin>>n;
    fib(n);
    return 0;
}