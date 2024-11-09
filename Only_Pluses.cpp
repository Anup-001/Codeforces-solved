#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n=5;
        cin>>a>>b>>c;
        while(n--){
            if(a<=b && a<=c){
                a++;
            }
            else if(b<=a && b<=c) b++;
            else c++;
        }
        cout<<a*b*c<<endl;
    }
}