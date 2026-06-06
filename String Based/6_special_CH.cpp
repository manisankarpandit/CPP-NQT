#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string t;
    for(int i = 0;i<s.size();i++){
        char ch = s[i];
        if(((int)(ch)<91 && (int)(ch)>64)|| ((int)(ch)<123 && (int)(ch)>96)){
            t+=ch;
        }
    }
    cout<<t;
}
