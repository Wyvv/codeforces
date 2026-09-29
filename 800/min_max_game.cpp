#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int one = 0, zero = 0;
        while (n--) {
            int num;
            cin >> num;
            if (num == 1) {
                one++;
            } else {
                zero++;
            }
        }
        if (one >= zero) {
            cout << "Bessie\n";
        } else {
            cout << "Elsie\n";
        }
    }

}