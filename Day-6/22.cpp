//Write a program to Convert binary to decimal. 
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long r,last_term=0;
    cout<<"Enter the binary number";
    cin>>r;

    string s= to_string(r);
    
    int length = s.size();

    int sum = 0;
    // cout<<length;
    for(int i=0;i<length;i++){
        last_term= r%10;
        int temp = last_term*(round(pow(2,i)));
        sum+=temp;
        r /=10;

    }
cout<<sum;
}