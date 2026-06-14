// Write a program to Find duplicates in array.


/*/////////////////////////////////////////////////////////////////////////////
The INT_MIN have fixed value(no need to declare it)
It is a built-in macro in C++ that represents the minimum possible value a standard 32-bit signed integer (int) can hold.
/////////////////////////////////////////////////////////////////////////////*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    
    cout<<"Enter total number of elements";
    cin>>n;
    int arr[n];
    cout<<"Now enter the elements";
    for (int i =0;i<n;i++){
    cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        if(arr[i]==INT_MIN) continue;
    for(int j = 1+i;j<n;j++){
       if(arr[i] == arr[j]){
           cout<<"The duplicate number is "<<arr[i];
           cout<<endl;
           
           arr[j]= INT_MIN;
        break;
       };
    }
    }
return 0;
}