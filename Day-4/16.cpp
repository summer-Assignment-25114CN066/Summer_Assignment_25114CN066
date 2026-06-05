#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1,n2;
   cout<<"Enter the first number of range";
   cin>>n1;
   cout<<"Enter the second number of range";
   cin>>n2;
   
   for(int i= n1;i<=n2;i++){
    int n =i;

    string s= to_string(n);
    int size = s.size();
    int sum=0;
    int originaln=n;
    while(n>0){
        int lastdigit=n%10;
        sum += round(pow(lastdigit,size));
        n=n/10;
    }
    if(originaln == sum){
        cout<<originaln<<" ";
    }
}
    return 0;
}