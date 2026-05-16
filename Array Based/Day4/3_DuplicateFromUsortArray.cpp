#include<bits/stdc++.h>
using namespace std;
void DuplicateUnsort(vector<int>&arr){
    int n = arr.size();
    unordered_map<int,int>mp;
    for(int i = 0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto x:mp){
        cout<<x.first<<" ";
    }
}
int main(){
    string s;
    getline(cin,s);
    if(s.front()=='['&&s.back()==']'){
        s = s.substr(1,s.length()-2);
    }
    stringstream ss(s);
    vector<int>arr;
    string temp;
    while(getline(ss,temp,' ')){
        int num = stoi(temp);
        arr.push_back(num);
    }
     DuplicateUnsort(arr);
}