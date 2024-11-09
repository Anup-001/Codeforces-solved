#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int x=0,y=0;
        for(int i=0;i<5;i++){
            if(a[i]=='A') x++;
            else y++;
        }
        if(x>y) cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }
}