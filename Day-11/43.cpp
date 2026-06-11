// Write a program to Write function to check
// prime.

#include <bits/stdc++.h>
using namespace std;
string prime(int a1){
    string status = "Yes, Prime";
    if (a1 == 1){status = "Yes, Prime";}
    if(a1>2){
    for(int i=2;i<=int(a1/2);i++){
    if((a1%i) == 0){
        status = "Not, Prime";
        break;
    }
    // else{
    //     status = false;
    // }
}
return status;
    }
}
int main(){
    int n1,n2;
    cout<<"Enter the number first";
    cin>>n1;
cout << prime(n1);
}