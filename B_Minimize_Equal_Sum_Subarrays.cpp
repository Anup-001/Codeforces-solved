#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++) cin>>arr[i];
        int mid=(n+1)/2;
        reverse(arr.begin(),arr.end());
        reverse(arr.begin()+1,arr.end());
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
}
