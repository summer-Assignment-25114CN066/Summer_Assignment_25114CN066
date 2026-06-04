/*/////////////////////////////////////////////////////////////////////////////
Write a program to Find sum of digits of a
number.
/////////////////////////////////////////////////////////////////////////////*/
#include <bits/stdc++.h>
using namespace std;


int main(){
    int p,sum= 0;
    cout<<"Enter the number";
    cin>>p;
    while (p>0){
       sum = sum + (p % 10);
       p = p/10;

    }
    cout<<"The sum is "<<sum<<endl;
    return 0;
}