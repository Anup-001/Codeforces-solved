#include <iostream>
#include <vector>

using namespace std;

long long max_operations(long long l, long long r, long long k) {
    long long operations = 0;
    long long count=0;
    for (long long x = l; x <= r; ++x) {
        // Calculate the number of multiples of x in the range [l, r]
        long long count_multiples = (r / x) - ((l - 1) / x);
        
        // Check if we can perform the operation
        if (count_multiples >= k) {
            operations++;
            count++;
        } else {
            // If count_multiples < k, we can break as x will only get larger
            break;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Read number of test cases
    vector<long long> results;

    while (t--) {
        long long l, r, k;
        cin >> l >> r >> k; // Read l, r, k
        results.push_back(max_operations(l, r, k));
        cout<<max_operations(l,r,k);
    }

    // Print results for all test cases


    return 0;
}