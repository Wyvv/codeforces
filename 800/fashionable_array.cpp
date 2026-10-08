#include <bits/stdc++.h>
using namespace std;

int n, a[101], cnt[101];

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 100; j >= 1; j--) {
            if (cnt[j] >= i) cout << j << ' ';
        }
    }

    for (int i = 1; i <= n; i++) cnt[a[i]] = 0;

    cout << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /**
     * find the number of largest values
     * put all of them at the front
     * put the same number of smaller values after
     * if there are any left over smaller values, stick them to the end in descending order
     * 
     */


    int t;
    cin >> t;
    while (t--) solve();
}