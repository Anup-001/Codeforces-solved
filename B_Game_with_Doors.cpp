#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,L,R;
        cin>>l>>r>>L>>R;
        cout<<max(1,(min(r,R)+(r!=R)-max(l,L)+(l!=L)))<<endl;
    }
}