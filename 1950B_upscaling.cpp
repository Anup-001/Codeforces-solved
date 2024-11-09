#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        string s="";
        string x="";
        for(long int i=0;i<n;i++){
            for(long int j=0;j<n;j++){
                if((i+j)%2==0){
                    s="##";
                }else s="..";
                x+=s;
            }cout<<x<<endl<<x<<endl;
            x="";
        }
    }
}