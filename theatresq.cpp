#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,a;
    cin>>m>>n>>a;
    cout<<((m+a-1)/a)*((n+a-1)/a);//   m/a*(m%a!=0)
}