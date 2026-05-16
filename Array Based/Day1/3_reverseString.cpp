#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "STUDENT";
    cout<<str<<endl;
    reverse(str.begin()+1,str.end()-3);
    cout<<str;
}