#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n),b(n),c(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int mn=a[0],mx=a[0],mns=0,mxs=0;
        for(int i=0;i<n-1;i++){
            b[i]=min(mn,a[i]);
            
            c[i]=max(mx,a[i]);
            
        }
        for(int i=0;i<n;i++){
            mns+=b[i];mxs+=c[i];
        }
        cout<<mxs-mns<<endl;
    }
}