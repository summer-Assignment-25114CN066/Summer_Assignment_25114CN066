<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main(){
   int p,r;
   bool q = true;
   cout<<"Enter the number";
   cin>>p;
   for (int i =2; i<p;i++){
    if(p%i==0){
    q= false;
    break;
}
   }
   
   if (q){
    cout<<"The number is prime ";

   }
else{cout<<"The number is not prime ";}
=======
/*/////////////////////////////////////////////////////////////////////////////
Write a program to Find sum of digits of a
number.
/////////////////////////////////////////////////////////////////////////////*/
#include <bits/stdc++.h>
using namespace std;


int main(){
    int p,sum= 0;
    cout<<"Enter the number";
    cin>>p;
    while (p>0){
       sum = sum + (p % 10);
       p = p/10;

    }
    cout<<"The sum is "<<sum<<endl;
    return 0;
>>>>>>> 8fd2788a0a085dd1d501d5442d3090ef12a73fd1
}