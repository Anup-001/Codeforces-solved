#include <bits/stdc++.h>
using namespace std; 
int main(){
    string s;
    cin>>s;
    int c1=0,c2=0,c3=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') {
            c1++;
        }
        else if(s[i]=='2') c2++;
        else if(s[i]=='3') c3++;
    }
    for(int i=0;i<c1;i++){
        cout<<1<<"+";
    }
    for(int i=c1;i<c2;i++){
        cout<<2<<"+";
    }
    // for(int i=0;i<c1;i++){
    //     cout<<1<<"+";
    // }
}