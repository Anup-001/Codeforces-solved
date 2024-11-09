#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k,count=0;
        cin>>n>>m>>k;
        vector<int> u(n),v(m);
        for(int i=0;i<n;i++) cin>>u[i];
        for(int i=0;i<m;i++) cin>>v[i];
        // sort(v.begin(),v.end());
        // sort(u.begin(),u.end());
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[j]+u[i]<=k) count++;
            }
        }
        cout<<count<<endl;
    }
}