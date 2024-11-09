#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int i=0;
        while(a[i]==b[i]&&i<min(a.size(),b.size())) i++;
        cout<<(a.size()+b.size()-i)+(i?1:0)<<endl;
    }
}