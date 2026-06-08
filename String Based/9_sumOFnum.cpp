#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string t = "";
    int sum = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            t+=s[i];
        }
        else {
            if(!t.empty()){
                sum += stoi(t);
                t = "";
            }
        }
    }
    if(!t.empty()){
        sum += stoi(t);
    }
    cout<<sum;

}