#include "bits/stdc++.h" 
using namespace std; 
int main(){
    long long n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n-1);

    for(int i=arr[0];i<n-1;i++){
        if(arr[i+1]-arr[i]==2){
            cout<<arr[i]+1;
        }
    }
}