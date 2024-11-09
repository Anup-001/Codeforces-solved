#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,a;
        cin>>s;
        a=s;
        reverse(a.begin(),a.end());
        cout<<min(s,a+s)<<endl;
    }
}