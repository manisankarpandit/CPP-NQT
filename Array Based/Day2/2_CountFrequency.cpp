#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>countFrequency(vector<int>&arr){
    unordered_map<int,int>mp;
    int n = arr.size();
    for(int i = 0;i<n;i++){
        mp[arr[i]]++;
    }
    vector<vector<int>>ans;
    for(auto x:mp){
        ans.push_back({x.first,x.second});
    }
    return ans;
}
int main(){
    string s;
    getline(cin,s);
    if(s.front()=='[' && s.back()==']'){
        s = s.substr(1,s.size()-2);
    }
    stringstream ss(s);
    vector<int>arr;
    string temp;
    while(getline(ss,temp,' ')){
        int num = stoi(temp);
        arr.push_back(num);
    }
    vector<vector<int>>ans = countFrequency(arr);
    for(auto x:ans){
        cout<<x[0]<<" "<<x[1]<<endl;
    }

}