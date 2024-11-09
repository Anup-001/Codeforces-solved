#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        char arr[n][n];
        for(auto &row:arr){
            for(char &c:row){
                cin>>c;
            }
        }
        for(int i=0;i<n;i+=k){
            for(int j=0;j<n;j+=k){
                cout<<arr[i][j];
            }cout<<"\n";
        }
    }
}