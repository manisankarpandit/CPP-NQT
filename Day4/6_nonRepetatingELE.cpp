#include<bits/stdc++.h>
using namespace std;
void nonrepatingele(vector<int>&arr){
    int n = arr.size();
    unordered_map<int,int>mp;
    for(int i = 0;i<n;i++){
        mp[arr[i]]++;
    }
    vector<int>ans;
    for(auto x:mp){
        if(x.second==1) ans.push_back(x.first);
    }
    reverse(ans.begin(),ans.end());
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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
    nonrepatingele(arr);
}