#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int asum=0;
        for(int i=0;i<n;i++){
            if(i%2==0) asum+=arr[i];
            else asum-=arr[i];
        }
        cout<<asum<<endl;
    }
}