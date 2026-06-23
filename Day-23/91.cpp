// Write a program to Check anagram strings. 
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;
    cout<<"Enter the string one"<<endl;
    getline(cin,s1);
    cout<<"Enter the string second"<<endl;
    getline(cin,s2);
    int size1 = s1.size();
    int size2 = s2.size();
    if (size1 != size2) {
        cout<<"The strings are not anagram";
        return 0;
    }
    sort(s1.begin(),s1.end());                                       //write this in the notebook
    sort(s2.begin(),s2.end());
    

    for(int i =0;i<size1;i++){
        
        if(s1[i]!=s2[i]){
            cout<<"The strings are not anagram";
            return 0;
        }
        
    }
    cout<<"The string is anagram";
    return 0;
}