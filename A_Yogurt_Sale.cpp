#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int sum=0;
        while(n>0){
            if((2*a)>b && n>1){
                sum+=b;
                n-=2;

            }
            else{
                sum+=a;
                n--;
            }
        }
        cout<<sum<<endl;
    }
}
