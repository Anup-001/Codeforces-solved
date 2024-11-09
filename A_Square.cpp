#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    int mx=0,mn;
    while(t--){
        int x[4],y[4];
        for(int i=0;i<4;i++){
            cin>>x[i]>>y[i];
        }
        sort(x,x+4);
        int ans=x[4-1]-x[0];
        cout<<ans*ans<<endl;
    }
}