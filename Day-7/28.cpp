//Write a program to Recursive reverse number
#include <bits/stdc++.h>
using namespace std;

int rev(int r){
    int l=r;
    if(r==0){return 0;}
    int lastdigit = r%10;
    r = r/10;
    string s = to_string(l);
    int size = s.length(); 
    size--;
    return (lastdigit*pow(10,size))+rev(r);
    
}

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int l=n;
    string s = to_string(l);
    int size = s.length(); 
    // for(int i = 0;i<size;i++){
    cout<<rev(n);
    
}