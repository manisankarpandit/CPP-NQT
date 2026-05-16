#include<bits/stdc++.h>
using namespace std;
int sumOFarray(vector<int>&arr){
    int n = arr.size();
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    return sum;

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
    int sum = sumOFarray(arr);
    cout<<sum;
}







