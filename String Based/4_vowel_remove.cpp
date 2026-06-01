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
    string t;
    for(int j = 0;j<s.size();j++){
        if(!isVowels(s[j])){
            t+=s[j];
        }
    }
    cout<<t;

    //user input
    // if(s.front()=='"' && s.back()=='"'){
    //     s = s.substr(1,s.size()-2);
    // }
    // stringstream ss(s);
    // string temp;
    // vector<string>v;
    // while(getline(ss,temp,' ')){
    //     v.push_back(temp);
    // }

    // for(int i = 0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // string t;
    // for(int i = 0;i<v.size();i++){
    //     string str = v[i];
    //     for(int j = 0;j<str.size();j++){
    //         if(!isVowels(str[j])){
    //             t+=str[j];
    //         }
    //     }
    // }
    // cout<<t;
}