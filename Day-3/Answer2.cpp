#include <bits/stdc++.h>
using namespace std;

int main(){
    int p,q;
cout<<"Enter the starting range value";
cin>>p;
cout<<"Enter the ending range value";
cin>>q;
for(int i = p;i<=q;i++){
    if(i<2) continue;
    bool isprime = true;
    for(int r =2;r<i;r++){
if(i%r==0){
    isprime = false;
    break;
}
}
if(isprime){
    cout<<i<<" ";
}
}
}