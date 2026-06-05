//Write a program to Check perfect number.
//The Logic:
//A perfect number must equal the exact sum of its proper divisors(including 1).
#include <bits/stdc++.h>
using namespace std;

int main(){
int n,i;
cout<<"Enter the number to check:";
cin>>n;
int sum = 0;
for(int i =1;i<n;i++){
if(n%i==0){
    sum += i; 
}
}
if(n==sum){
    cout<<"The number is Perfect number";

}
else{
    cout<<"The number is not Perfect number";
}
}