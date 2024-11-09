#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int count=0;
    for(int i=1;i<10;i++){
        a*=3*i;
        b*=2*i;
        count++;
        if(a>b){
            cout<<count;
            break;
        }
        else{
            continue;
        }
    }
}