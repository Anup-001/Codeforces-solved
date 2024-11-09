#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        string main=s;
        sort(s.begin(),s.end());
        map<char,int> mp;
        int c=0;
        string r="";
        for(int i=0;i<n;i++){
            if(mp.find(s[i])==mp.end()){
                r+=s[i];
                mp[s[i]]=c;
                c++;
            }
        }int k=r.size();string s1="";
        for(int i=0;i<n;i++){
            int x=mp[main[i]];
            s1+=r[k-1-x];
        }
        cout<<s1<<endl;
    }
}