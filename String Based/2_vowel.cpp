#include<bits/stdc++.h>
using namespace std;
bool isVowels(char ch){
    if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u') return true;
    else if(ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U') return true;
    else return false;   
}
int main(){
    string s;
    getline(cin,s);
    int vowels = 0;
    int consonants = 0;
    int space  = 0;
    int n = s.size();
    for(int i = 0;i<n;i++){
        if(isVowels(s[i])) vowels++;
        else if(s[i]==' ') space++;
        else consonants++;
    }
    cout<<vowels<<" "<<consonants<<" "<<space;
    
}