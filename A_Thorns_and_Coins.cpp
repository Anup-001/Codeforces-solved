#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        int count=0;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='@') count++;
            else if(s[i]=='*' && s[i+1]=='*') break;     
        }cout<<count<<endl;
    }
}