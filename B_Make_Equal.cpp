#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int x=sum/n,y=0;
        bool c=true;
        for(int i=0;i<n;i++){
            y+=a[i]-x;
            if(y<0) c=false;
        }
        if(c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}