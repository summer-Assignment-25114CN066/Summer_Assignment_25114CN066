//Write a program to Check strong number
#include <bits/stdc++.h>
using namespace std;

int factorial(int f){
    int last=1;
    
    for(int i =1; i<=f;i++){
        last = last*i;
    }
    return last;
   }

int main(){
int n;
cout<<"Enter the number to check";
cin>>n;
int originaln = n;
int sum =0;
while(n>0){
int lastdigit = n%10;
sum += factorial(lastdigit);
n = n/10;
}
if(originaln==sum){
    cout<<"The number is Strong Number";
}
else{
    cout<<"The number is not Strong Number";
}
}