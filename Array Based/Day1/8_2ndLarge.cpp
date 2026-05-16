#include<bits\stdc++.h>
using namespace std;
int Smax(vector<int>&arr){
    int n = arr.size();
    int mx = INT_MIN;
    int smx = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i]>mx){
            smx = mx;
            mx = arr[i];
        }
        else if(arr[i]>smx){
            smx = arr[i];
        }
    }
    return smx;
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
    cout<<Smax(arr);
    return 0;
}