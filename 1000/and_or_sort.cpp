#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int z = 0;
    int o = 0;
    for (int i = 0; i < n; i++) {
        z += (s[i] == '0');
    }
    if (s[0] == '1') {
        cout << z << endl;
        return;
    }
    int res = 1e9;
    for (int i = 0; i < n; i++) {
        o += (s[i] == '1');
        z -= (s[i] == '0');
        res = min(res, o + z);
    }
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}