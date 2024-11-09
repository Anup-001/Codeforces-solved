#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int sum=0,mx=0,count=0;
        for(int i=0;i<n;i++){
            mx=max(mx,arr[i]);
            sum+=arr[i];
            if(sum==2*mx) count++;
            
        }
        cout<<count<<endl;
    }
}