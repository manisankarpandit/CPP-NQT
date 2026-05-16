#include<bits/stdc++.h>
using namespace std;
float Average(vector<int>&arr){ //return type float
    int n = arr.size();
    float avg = 0.0;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    return (float)sum/n; //ans should be float

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
    float avg = Average(arr);
    cout<<avg;
}







