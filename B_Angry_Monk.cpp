#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<int> a(k);
    for (int i = 0; i < k; ++i) {
      cin >> a[i];
    }
    int count=0;
    sort(a.begin(), a.end());
    for(int i=0;i<k-1;i++){
      count+=2*a[i]-1;
    }
    cout<<count<<endl;
  }
}