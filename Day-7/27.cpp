// Write a program to Recursive sum of digits
#include <bits/stdc++.h>
using namespace std;

int sum(int s){
    int digit = 0;
    if (s==0){return 0;}
    digit = digit +s%10;
    s = s/10;
    return digit + sum(s);
}

int main(){
    int n;
 cout<<"Enter the number";
 cin>>n;  
 
 cout<<sum(n);
}