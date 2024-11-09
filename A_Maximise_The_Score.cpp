#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        vector<int> a(2*n);
        for(int i=0;i<2*n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=0;i<2*n;i++){
            if(i&1){

            }else{sum+=a[i];}
        }cout<<sum<<endl;
    }
}

