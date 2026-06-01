#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string t;
    for(int i = 0;i<s.size();i++){
        if(s[i]!=' '){
            t+=s[i];
        }
    }
    cout<<t;
}