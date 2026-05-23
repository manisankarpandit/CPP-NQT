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

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}