#include<bits/stdc++.h>
using namespace std;
void insertAtbegin(vector<int>&arr,int k){
     arr.insert(arr.begin(),k); // using insert we can insert any value from begin
     for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
     }
}
void insertAtend(vector<int>&arr,int k){
     arr.insert(arr.end(),k); // using insert we can insert any value from begin
     for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
     }
}
void insertAtanyPos(vector<int>&arr,int k,int pos){
     arr.insert(arr.begin()+pos,k); // using insert we can insert any value from begin
     for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
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
    int k;
    cin>>k;
    // insertAtbegin(arr,k);
    // insertAtend(arr,k);
    int pos;
    cin>>pos;
    insertAtanyPos(arr,k,pos);
}