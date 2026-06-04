#include <bits/stdc++.h>
using namespace std;
int main(){
double d=0;
int r=0,m=0;
//Following the standard rules we are not considering the decimal parts in the counting of the digits.
cout<<"Enter the digits = ";
cin>>d;
r = d;
cout<<r;
for(int i = 0; i>0;i--){
r=(r/10);
m=m+1;
}
cout<<m;
}