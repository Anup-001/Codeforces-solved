#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=6||n==9) printf("NO\n");
        else printf("YES\n%d %d %d\n",1,2+2*(n%3==0),n-3-2*(n%3==0));
    }
}
