#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int val=1,score=0;
        while(val<=b)
        {
            score++;
            val*=2;
            // cout<<score<<"\t"<<val<<endl;
        }
        cout<<score-1<<endl;
    }
}