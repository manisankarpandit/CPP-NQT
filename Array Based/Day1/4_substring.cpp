#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "STUDENT";
    cout<<str.substr(1);
    for(int i = 0;i<str.size();i++){
        cout<<str.substr(i,4)<<endl;
    }
}