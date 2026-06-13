// Write a program to Count even and odd
// elements.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int even=0,odd=0;
    int arr[10];
    for(int i =0;i<=9;i++){
    cin>>arr[i];
    }
    for(int i =0;i<=9;i++){
    if((arr[i]%2) == 0 ){
    even++;
    }
    else odd++;
    }
    cout<<"Even = "<<even<<endl;
    cout<<"Odd = "<<odd;
    return 0;
}