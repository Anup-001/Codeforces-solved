#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i=0;i<n;i++) mp[s[i]]++;
        int count=0;
        for(char ch='A';ch<='G';ch++){
            if(mp[ch]<m){
                count+=(m-mp[ch]);
            }
        }
        cout<<count<<endl;
    }
}