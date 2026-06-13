// Write a program to Find largest and smallest
// element.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10];
    for(int i =0;i<=9;i++){
    cin>>arr[i];
    }
    int a =arr[0],b=0;
    
    for(int i =0;i<=9;i++){
    b = arr[i];
    if(b>a){
    a=b;
    }

    }

    cout<<a;
    return 0;
}