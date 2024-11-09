#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x,y;
        cin>>n;
        cin>>x>>y;
        long c=(n%min(x,y)!=0)?1:0;
        cout<<(n/min(x,y))+c<<endl;
        // cout<<endl;
    }
}