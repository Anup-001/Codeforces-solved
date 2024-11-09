#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        b %= 2;
        if((b&1) && a<=1) cout << "NO" << endl;
        else cout << (a % 2 ? "NO" : "YES") << endl;
    }
}