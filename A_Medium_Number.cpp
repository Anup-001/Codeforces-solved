#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mx=max(a,max(b,c));
        int mn=min(a,min(b,c));
        if(b!=mx && b!=mn) cout<<b<<endl;
        else if(a!=mx && a!=mn) cout<<a<<endl;
        else cout<<c<<endl;
    }
}