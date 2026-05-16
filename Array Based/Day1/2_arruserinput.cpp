#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    //normal array

    // int arr[n];
    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }

    //vector array
    vector<int>arr;
    for(int i = 0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    for(int a :arr){
        cout<<a<<" ";
    }

}