#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        int wins=0;
        if (a1 > b1 && a2 > b2) wins++;
        if (a1 > b2 && a2 > b1) wins++;
        if (a1 > b1 && a2 == b2) wins++;
        if (a1 == b1 && a2 > b2) wins++;
        if (a1 > b2 && a2 == b1) wins++;
        if (a1 == b2 && a2 > b1) wins++;
        cout<<wins*2<<endl;
    }
}