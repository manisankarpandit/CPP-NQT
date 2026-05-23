#include<bits/stdc++.h>
using namespace std;
void palindrome(vector<string>&v){
    for(string x:v){
        string rev = x;
        reverse(rev.begin(),rev.end());
        if(x==rev) cout<<x<<" Palindrome"<<endl;
        else cout<<x<< " is not palindrome";
    }
    return;
}
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

    palindrome(v);
}