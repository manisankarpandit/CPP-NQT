#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    if(s.front()=='[' && s.back()==']'){
        s = s.substr(1,s.size()-2);
    }
    stringstream ss(s);
    string temp;
    vector<string>v;
    while(getline(ss,temp,' ')){
        v.push_back(temp);
    }

    int vowels = 0;
    int consonants = 0;
    int space  = 0;
    for(int i = 0;i<v.size();i++){
        if(v[i]=="a" || v[i]=="e" || v[i]=="i" || v[i]=="o" || v[i]=="u") vowels++;
        else if(v[i]==' ') space++;
        else consonants++;

    }
    cout<<vowels<<" "<<consonants<<" "<<space;
    
}