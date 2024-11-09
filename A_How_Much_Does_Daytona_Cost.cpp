#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x=0;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(k==a[i]) x=1;
        }
        if(x==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}