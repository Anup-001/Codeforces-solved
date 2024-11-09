#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m,x;
        cin>>n>>m;
        n*=m;
        if(n==1) cin>>x,cout<<"-1\n";
        else{
            for(int i=1;i<=n;i++) cin>>x,cout<<x%n+1<<' ';
            cout<<'\n';
        }
    }
}