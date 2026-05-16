#include<bits/stdc++.h>
using namespace std;
void replaceebyRank(vector<int>&arr){
    int n = arr.size();
    vector<int>arr1;
    arr1 = arr;
    vector<int>ans;
    sort(arr.begin(),arr.end());
    for(int j = 0;j<n;j++){
        for(int i = 0;i<n;i++){
            if(arr1[j]==arr[i]){
                ans.push_back(i+1);
                break;
            }
        }
    }
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    string s;
    getline(cin,s);
    if(s.front() =='[' && s.back() ==']'){
        s = s.substr(1,s.length()-2);
    }
    stringstream ss(s);
    vector<int>arr;
    string temp;
    while(getline(ss,temp,' ')){
        int num = stoi(temp);
        arr.push_back(num);
    }
    replaceebyRank(arr);
}