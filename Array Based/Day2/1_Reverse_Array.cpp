#include<bits\stdc++.h>
using namespace std;
void reverses(vector<int>&arr){
    int n = arr.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
    string s;
    getline(cin,s);
    if(s.front()=='[' && s.back()==']'){
        s = s.substr(1,s.length()-2);
    }
    stringstream ss(s);
    vector<int>arr;
    string temp;
    while(getline(ss,temp,' ')){
        int x = stoi(temp);
        arr.push_back(x);
    }
    reverses(arr);
    for(int a:arr){
        cout<<a<<" ";
    }
    // return 0;
}