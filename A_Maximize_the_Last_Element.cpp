#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=max(a[0],a[n-1]);
        for(int i=0;i<n;i++){
            int l=i;
            int r=n-i-1;
            if(a[i]>ans){
               if(l%2==0 && r%2==0) ans=a[i];
            }
        }
        cout<<ans<<endl;
    }
}