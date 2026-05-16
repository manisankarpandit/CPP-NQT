#include<bits/stdc++.h>
using namespace std;
void med(vector<int>&arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    if(n%2!=0){
        cout<<"median is "<<arr[(n/2)];
    }
    else{
        float median = ((arr[n/2]+arr[n/2-1])/2.0);
        cout<<"Median is "<<median;
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
     med(arr);
     
}