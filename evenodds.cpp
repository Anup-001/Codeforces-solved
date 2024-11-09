#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n,k;
    cin>>n>>k;
    long long int odds=(n+1)/2;
    if(k<=odds){
        cout<<2*k-1;
    }
    else{
        cout<<2*(k-odds);
    }//for 10 10 input the output will be 10 because integer type is used so any integer is rounded close to 0.
    
}