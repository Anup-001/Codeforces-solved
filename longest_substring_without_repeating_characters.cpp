#include<bits/stdc++.h>
using namespace std;
class sol{
    public:
        int lengthoflongestsubstring(string s){
        int n=s.length();
        int maxl=0;int l=0;
        unordered_set<char> cs;
        for(int r=0;r<n;r++){
            if(cs.count(s[r]==0)){
                cs.insert(s[r]);
                maxl=max(maxl,r-l+1);
            }else{
             while(cs.count(s[r])){
                    cs.erase(s[l]);
                    l++;
            }
            cs.insert(s[r]);
            }
        }return maxl;
};

int main(){
    string s;
    cin>>s;
    sol s1;
    int x=s1.lengthoflongestsubstring(s);
    cout<<x;
}}

