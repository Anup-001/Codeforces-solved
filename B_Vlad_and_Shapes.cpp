#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<string> v(n);
        for(auto &x:v) cin>>x;
        bool c=true;
        for(auto x:v){
            if(x.find("010")!=-1){
                c=false;
                break;
            }
        }
        cout<<(c?"SQUARE":"TRIANGLE")<<endl;
    }
}