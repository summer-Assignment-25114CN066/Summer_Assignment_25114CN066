#include <bits/stdc++.h>
using namespace std;

int main(){
    int N=0,sum=0;
    cout<<"Enter the N(number of natural numbers)";
    cin>>N;
    cout<<"The number you entered is = "<<N;
    cout<<endl;
    for(int i = 1; i<=N; i++){
       sum = sum+i;
    }
    cout<<"The sum of N numbers = "<<sum;
}