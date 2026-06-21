// Write a program to Count vowels and
// consonants.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    getline(cin,s);
    string s1;
    int vovels = 0;
    int consonants = 0;
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    for(auto c:s){
        if(isalpha(c)){
             char upper_c = toupper(c);
        
    if(upper_c ==('A')||upper_c == ('E')||upper_c ==('I')||upper_c ==('O')||upper_c ==('U')){
    vovels++;
    }
    else consonants++;
    }}
    cout<<"The vovels are "<<vovels<<endl;
    cout<<"The consonants are "<<consonants;
    
}