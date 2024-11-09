#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        map<int,int>dp;
        for(int i=0,k;i<n;i++){
	        cin>>k;
          	++dp[k];
        }
        for(int i=0;i<=n;i++){
            if(dp[i]==0){
                cout<<i<<endl;
                break;
            }
        dp[i+m]+=dp[i]-1;
        }
    }
}
