#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n,y;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            y=0;
        }
        else if(arr[i]<0){
            int mx=-100000;
            mx=max(mx,arr[i]);
            y=-1*mx;
        }
        else{
            int count=0;
            while(arr[i]--){
                count++;
            }
    }
    cout<<y<<endl;
}