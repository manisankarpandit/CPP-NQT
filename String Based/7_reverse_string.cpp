#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int i = 0;
    int j = s.size()-1;
    while(i<j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout<<s;
}