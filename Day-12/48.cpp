// Write a program to Write function for perfect
// number.
#include <bits/stdc++.h>
using namespace std;

void fib(int n){
    int i;

int sum = 0;
for(int i =1;i<n;i++){
if(n%i==0){
    sum += i; 
}
}
if(n==sum){
    cout<<"The number is Perfect number";

}
else{
    cout<<"The number is not Perfect number";
}

}

int main() {
    int n;
    cout<<"Enter the number to check:";
cin>>n;
    fib(n);
    return 0;
}