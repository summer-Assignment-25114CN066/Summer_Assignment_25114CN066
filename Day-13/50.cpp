// Write a program to Find sum and average of
// array.
#include <bits/stdc++.h>
using namespace std;

int main() {
    float sum=0;
    float average = 0;
    int arr[10];
    for(int i =0;i<=9;i++){
    cin>>arr[i];
    }
    for(int i =0;i<=9;i++){
        sum = sum + arr[i];
    }
    average = sum/10;   

    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<average;
    return 0;
}