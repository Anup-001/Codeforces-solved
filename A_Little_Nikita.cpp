#include <bits/stdc++.h>
using namespace std; 
int main(){
    int m,n,t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n>=m && (n%2)==(m%2)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}