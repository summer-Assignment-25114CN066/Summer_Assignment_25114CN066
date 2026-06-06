//how many 1s are in the binary representation of a given number
#include <bits/stdc++.h>
using namespace std;




int main(){
int i=0,n,l=0;
int arr[999];
int arr1[999];
  
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
    //    arr[r]=arr1[l];
       if(arr[r]==1){l++;}

       
}
cout<<l;

}