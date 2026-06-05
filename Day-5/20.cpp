//Write a program to Find largest prime factor.
#include <bits/stdc++.h>
using namespace std;
//The difference between prime factor and factor is, factor which are the prime numbers is called prime factor.
int main(){
  int n;
    cout<<"Enter the number";
    cin>>n;
    
    
    for(int i=n;i>=2;i--){
        if(n%i==0){
        
            for(int p=2;p<=i;p++){
            if(i%p==0){
            if(p==i){
                cout<<i;
                return 0;
            }
            break;
            }
            
            
            }
        }

    }
    
    
}