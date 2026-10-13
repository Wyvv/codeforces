#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll CYC[8] = {4, 16, 37, 58, 89, 145, 42, 20};

int sig(ll x) {
    ll s = 0;
    while (true) {
        // Calculate the signature
        if (x == 1) return 8;
        for (int k = 0; k < 8; k++) {
            if (x == CYC[k]) return (int)(((k - s) % 8 + 8) % 8);
        }
        // If we reached this part, that means the signature was not one of the 8
        // Means we must apply operation until it matches one of the signatures
        ll y = 0; // y becomes the number after the transform
        while (x > 0) { // Apply the transform onto x
            ll remainder = x % 10; 
            y += remainder * remainder;
            x /= 10;
        }
        x = y;
        s++; // Increase the number of operations done
    }
}

void solve() {
    ll cnt[9];
    int n;
    cin >> n;
    
    for (int i = 0; i <=8; i++) cnt[i] = 0;

    for (int i = 1; i <= n; i++) {
        ll a; cin >> a;
        cnt[sig(a)]++;
    }

    ll ans = 0;

    for (int i = 0; i <= 8; i++) {
        ans += cnt[i] * (cnt[i] - 1) / 2;
    }

    cout << ans << endl;
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