#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if(l%2 && r%2) r++;
        cout<<(r-l+1)/4<<endl;

    }
}