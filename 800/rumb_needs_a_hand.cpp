#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> numbers(n);
        for (int &x : numbers) cin >> x;

        vector<int> bad;
        for (int i = 0; i < n; ++i) {
            if (numbers[i] != numbers[i+1]) {
                bad.push_back(i);
            }
        }

        bool ok = true;
        int k = bad.size();
        for (int i = 0; i < k; ++i) {
            if (numbers[bad[i]] != bad[k - 1 - i] + 1) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}