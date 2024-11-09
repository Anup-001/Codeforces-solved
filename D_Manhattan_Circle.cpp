#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        int count=0;
        char arr[n+1][m+1];
        vector<int> v;
        vector<int> u;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='#'){
                    count++;
                    v.push_back(i);
                    u.push_back(j);
                }
            }
        }
        int x=(count/2)+1;
        
        cout<<v[x-1]<<" "<<u[x-1]<<endl;
        
    }
}
