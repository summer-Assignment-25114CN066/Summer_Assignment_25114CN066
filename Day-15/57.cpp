// Write a program to Reverse array.




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
    for(int i =0;i<n/2;i++){
       swap(arr[i],arr[n-i-1]);
    }
    for(int i =0;i<n;i++){
    cout<<arr[i];
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n,temp,a,b;
//     cout<<"Enter the size of array";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements";
//     for(int i =0;i<n;i++){
//     cin>>arr[i];
//     }
//     for(int i =0;i<n/2;i++){
//         a=arr[i];
//         b=arr[n-i-1];
//         temp = a;
//         a=b;
//         b=temp;
//         arr[n-i-1]=b;
//         arr[i]=a;
//     }
//     for(int i =0;i<n;i++){
//     cout<<arr[i];
//     }
//     return 0;
// }