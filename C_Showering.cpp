#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        vector<pair<int, int>> intervals(n);
        for(int i=0;i<n;i++) cin>>intervals[i].first>>intervals[i].second;
        sort(intervals.begin(),intervals.end());
        bool cs=false;
        int prev_end=0;
        for(int i=0;i<n;i++){
            int start=intervals[i].first;
            int end=intervals[i].second;
            if(start-prev_end>=s){
                cs=true;
                break;
            }
            prev_end=end;
        }
        if(m-prev_end>=s) cs=true;
        cout<<(cs?"YES":"NO")<<endl;
    }
}