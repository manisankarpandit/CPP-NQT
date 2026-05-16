#include<bits\stdc++.h>
using namespace std;
int SecSmall(vector<int>&arr){
    int n = arr.size();
    int mn = INT_MAX;
    int smn = INT_MAX;
    for(int i = 0;i<n;i++){
        if(arr[i]<mn){
            smn = mn;
            mn = arr[i];
        }
        else if(arr[i]<smn){
            smn = arr[i];
        }
    }
    return smn;
}
int main(){
    string s;
    getline(cin,s);
    if(s.front()=='[' && s.back()==']'){
        s = s.substr(1,s.length()-2);
    }
    stringstream ss(s);
    string temp;
    vector<int>arr;
    while(getline(ss,temp,',')){
        int num = stoi(temp);
        arr.push_back(num);
    }
    cout<<SecSmall(arr);
    return 0;
}