#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int m=4*n;
        map<char,int> a;
        for(int i=0;i<m;i++){
            a[s[i]]++;
        }
        int ans=0;
        for(auto j:a){
            if(j.first!='?') ans+=(min(j.second,n));
            //else ans+=j.second;
        }cout<<ans<<endl;
    }
}
