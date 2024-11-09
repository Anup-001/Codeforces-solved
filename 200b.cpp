#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long double sum=0.0;
    cin>>n;
    long double arr[n];
    //n=(double)n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum/n;
}