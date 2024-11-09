#include <bits/stdc++.h>
using namespace std; 
void solve(){
    int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        map<int,int> mp;
        for(int i=0;i<n;i++) mp[a[i]]++;
        for(auto x:mp){
            if(x.second%2!=0){ cout<<"YES"<<endl;
            return;}
        }cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}