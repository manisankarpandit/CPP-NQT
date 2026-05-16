#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<int>arr;
    string temp;
    while(getline(ss,temp ,' ')){
        int x = stoi(temp);
        arr.push_back(x);
    }
    int n = arr.size();
    int mini = INT_MAX;
    for(int i = 0;i<n;i++){
        mini = min(mini,arr[i]);
    }
    cout<<mini;
}