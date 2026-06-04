//Greatest Common Divisor
#include <bits/stdc++.h>
using namespace std;
int findGCD(int a, int b){
if(b==0) return a;
return findGCD(b,a%b);
}
int main(){
int a,b;
    cout <<"Enter the first number";
    cin>>a;
    cout<<"Enter the second number";
    cin>>b;
    cout<<"GCD is:" <<findGCD(a,b);
    return 0;
}