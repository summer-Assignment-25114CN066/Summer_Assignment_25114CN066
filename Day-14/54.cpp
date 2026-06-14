// Write a program to Frequency of an element
#include <bits/stdc++.h>
using namespace std;

int main() {
    int fre =0;
    int arr[5] ={1,2,2,2,5};
    int s;
    cout<<"Enter the number to search";
    cin>>s;
    for(int i=0;i<5;i++){
    if (arr[i]==s){
        fre++;
    }
    
}
if(fre>0){
cout<<"The frequency of search number is : "<<fre;
return 0;
}
cout<<"Number not found"<<endl;
return 0;
}