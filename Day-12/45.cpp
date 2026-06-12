// Write a program to Write function for
// palindrome
#include <bits/stdc++.h>
using namespace std;

string pall(int n){
   int rev = 0;
   int temp = n;
while(n>0){
    int lastdigit = n%10;
    rev = rev*10+lastdigit;
    n = n/10;
}
if(rev == temp ){
    return "Yes";
}
else return "No";
}

int main() {
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<pall(n);
    return 0;
}