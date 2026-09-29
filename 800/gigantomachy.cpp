#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> bea(n);
        for (auto &x : bea) cin >> x;
        int b;
        cin >> b;
        for (int i = 0; i < m - 1; i++) {
            int temp;
            cin >> temp;
        }
        cout << (bea[0] + n >= b + m ? "1\n" : "2\n");
    }
}

