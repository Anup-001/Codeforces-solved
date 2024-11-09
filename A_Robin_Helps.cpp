#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,a,x,s;
	cin>>t;
	while(t--){
		cin>>n>>k;x=s=0;
		for(int i=1;i<=n;i++){
			cin>>a;
			if(a>=k)x+=a;
            else if(a==0&&x>0){
			//else if(!a&&x){
				s++;x--;
			}
		}
		cout<<s<<"\n";
	}
}