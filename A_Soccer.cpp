#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x1,x2,y1,y2;
        cin>>x1>>y1;
        cin>>x2>>y2;
        if(x1>y1 && x2>y2){
            cout<<"YES"<<endl;
        }
        else if(y1>x1 && y2>x2){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}