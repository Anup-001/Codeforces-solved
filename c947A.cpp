#include<bits/stdc++.h>
using namespace std;
bool problemA(vector<int>& a){
    vector<int> sorted_a=a;
    sort(sorted_a.begin(),sorted_a.end());
    int n=a.size();
    for(int i=0;i<n;i++){
        bool match= true;
        for(int j=0;j<n;++j){
            if(a[(i+j)%n]!=sorted_a[j]){
                match=false;
                break;
            }
        }if(match) return true;
    }
    return false;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;++i) cin>>a[i];
        if(problemA(a)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }return 0;
}