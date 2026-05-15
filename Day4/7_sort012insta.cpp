#include<bits/stdc++.h>
using namespace std;
void sort012(vector<int>&arr){
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int hi = n-1;
    while(mid<=hi){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[hi]);
            hi--;
        }
        else mid++;
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
    sort012(arr);
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}