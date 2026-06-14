// Write a program to Linear search.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i =0;
    int arr[5] ={1,2,3,4,5};
    int s;
    cout<<"Enter the number to search";
    cin>>s;
    for(int i=0;i<=5;i++){
    if (arr[i]==s){
    cout<<"The index of search number is : "<<i;
    return 0;
    }
    
}
cout<<"Number not found"<<endl;
return 0;
}