#include<bits/stdc++.h>
using namespace std;
int main(){
    long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        while(n!=1){
            if(n%2==0){
                n/=2;
            }
            else{
                cout<<"YES"<<endl;
                break;
            }
        }
        if(n==1){
            cout<<"NO"<<endl;
        }
    }
}