//Write a program to Convert decimal to binary. 
#include <bits/stdc++.h>
using namespace std;




int main(){
int i=0,n;
int arr[999];
  
cout<<"Enter the number";
    cin>>n;

do{

if(n%2 == 0){    arr[i]=0;     }
if(n%2 == 1){     arr[i]=1;   }

    i++;
    n=n/2;

}while(n>0);

int p;
//p=(i)-1;
p = --i;
for (int r = p; r>=0;r--){
       cout<<arr[r];
}

}