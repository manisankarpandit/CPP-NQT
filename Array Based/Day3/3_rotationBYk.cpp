#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&arr,int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    return;
}
void Rightrotation(vector<int>&arr,int k){
    int n = arr.size();
    if(k>n) k = k%n;
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
    return;
}
void LeftRotation(vector<int>&arr2,int k){
    int n = arr2.size();
    Rightrotation(arr2,n-(k%n));
    return;
}
int main(){
    string s;
    getline(cin,s);
    if(s.front()=='{' && s.back()=='}'){
        s = s.substr(1,s.length()-2);
    }
    vector<int>arr;
    stringstream ss(s);
    string temp;
    while(getline(ss,temp,',')){
        int num = stoi(temp);
        arr.push_back(num);
    }
    vector<int>arr2 = arr;
    int k;
    cin>>k;
    Rightrotation(arr,k);
    for(int a:arr){
        cout<<a<<" ";
    }
    cout<<endl;
    LeftRotation(arr2,k);
    for(int a:arr2){
        cout<<a<<" ";
    }
    cout<<endl;
}







