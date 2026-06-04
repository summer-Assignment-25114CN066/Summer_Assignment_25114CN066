//Greatest Common Divisor
#include <bits/stdc++.h>
using namespace std;
int findGCD(int a, int b){
if(b==0) return a;
return findGCD(b,a%b);
}
int main(){
int a,b,G,l;
    cout <<"Enter the first number";
    cin>>a;
    cout<<"Enter the second number";
    cin>>b;
    G=findGCD(a,b);
    l = (a*b)/G;
    cout<<"The LCM is "<<l;
    return 0;
}