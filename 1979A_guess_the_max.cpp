#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n;cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            v.push_back(a);
        }
        int y=max(v[0],v[1]);
        for(int i=0;i<n-1;i++)
        y=min(y,max(v[i],v[i+1]));
        cout<<y-1<<endl;
        // int n;
        // cin>>n;
        // int a[n];
        // for(int& i:a){
        //     cin>>i;
        // }
        // int y=max(a[0],a[1]);
        // for(int i=1;i<n-1;i++){
        //     y=min(y,max(a[i],a[i+1]));
        // }
        // cout<<y-1<<"\n";
    }
    
   
}