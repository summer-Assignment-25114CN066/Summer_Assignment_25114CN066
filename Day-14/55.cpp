// Write a program to Second largest element.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int larg = 0;
    int secondlarg = 0;
    int n;
    cout<<"Enter total number of elements";
    cin>>n;
    int arr[n];
    cout<<"Now enter the elements";
    for (int i =0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
cout<<"The second largest element is "<<arr[n-2];

}