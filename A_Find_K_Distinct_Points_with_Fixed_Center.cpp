#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        for(int i=x-k+1;i<x+k;i+=2){
            cout<<i<<' '<<y<<endl;
        }
    }
}
