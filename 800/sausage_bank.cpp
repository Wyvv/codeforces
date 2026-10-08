#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio();
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << ((1 << (n - k + 1)) + 2 * (k - 1)) << "\n";
    }
}