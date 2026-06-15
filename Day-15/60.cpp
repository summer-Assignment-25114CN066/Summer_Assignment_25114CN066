// Write a program to Move zeroes to end. 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,temp,a,b;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i =0;i<n;i++){
    cin>>arr[i];
    }
    int pos = 0;
    for(int i =0;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[pos]);
        pos++;
    }
    
    }
    for(int i =0;i<n;i++){
    cout<<arr[i];
    }
    return 0;
}