// Write a program to Rotate array right
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i =0;i<n;i++){
    cin>>arr[i];
    }
    int p=0,j=0;
    cout<<"Enter the position";
    cin>>p;
    p = p%n;
    reverse(arr,arr+n);
    reverse(arr+p,arr+n);
    reverse(arr,arr+p);
    for(int i : arr){
    cout<<i;
    }
    return 0;
}