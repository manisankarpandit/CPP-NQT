#include<bits/stdc++.h>
using namespace std;
void movesZero(vector<int>&arr){
    int n = arr.size();
    int j = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return ;
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
     movesZero(arr);
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}