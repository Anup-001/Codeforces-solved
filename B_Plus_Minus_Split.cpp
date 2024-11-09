#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m=0,p=0;
        cin>>n;
        char s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
            if(s[i]=='+'){
                p++; 
            }else{
                m++;
            }
        }
        if(m>p){
            cout<<m-p<<endl;
        }else cout<<p-m<<endl;
        
    }
}