#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        for(int i=1;i<=n;i++){
            string s;
            cin>>s;
            for(int j=1;j<=s.length();j++){
                if(s[j-1]=='#') a.push_back(j);
            }
        }
        reverse(a.begin(),a.end());
        for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}
        cout<<endl;
    }
}