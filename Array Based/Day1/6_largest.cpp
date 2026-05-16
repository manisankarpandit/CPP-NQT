#include<bits\stdc++.h>
using namespace std;
int largest(vector<int>&arr){
    int n = arr.size();
    int mx = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i]>mx){
            mx = arr[i];
        }
    }
    return mx;
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
    while(getline(ss,temp,' ')){
        int num = stoi(temp);
        arr.push_back(num);
    }
    int large =largest(arr);
    cout<<large;
}