#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        long long k;
        cin >> x >> y >> k;
        long long sum = 0;
        long long difference = y - x;
        for (int i = 0; i < k; i++) {
            if (x > difference) {
                sum += difference * (k - i);
                break;
            }
            sum += y % x;
            x++;
            y++;
        }
        cout << sum << "\n";
    }
    return 0;
}