#include<bits/stdc++.h>
using namespace std;
void rearange(vector<int>&arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    reverse(arr.begin()+n/2,arr.end());
    for(int a:arr){
        cout<<a<<" ";
    }
}
int main(){
    string s;
    getline(cin,s);
    if(s.front()=='[' && s.back()==']'){
        s = s.substr(1,s.length()-2);
    }
    vector<int>arr;
    stringstream ss(s);
    string temp;
    while(getline(ss,temp,' ')){
        int num = stoi(temp);
        arr.push_back(num);
    }
    rearange(arr);
}







