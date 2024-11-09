#include <bits/stdc++.h>
using namespace std; 
int main(){
  int t;
  cin >> t;
  while(t--){
    long long n;
    cin >> n;
    
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }int mx=0;
    for(int i=0;i<n-1;i++){
      
      mx=max(mx,b[i]);
    }
    
    cout<<mx+b[n-1]<<endl;
    
  }
}