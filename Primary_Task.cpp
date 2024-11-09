#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.substr(0,2)!="10") cout<<"NO"<<endl;
        else if(s[2]=='0') cout<<"NO"<<endl;
        else if(s.size()==3 && s[2]=='1') cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}