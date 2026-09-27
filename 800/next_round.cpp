#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int kth_score = 0;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        if (i == k - 1) {
            kth_score = score;
        }
        if (score >= kth_score && score > 0) {
            res++;
        }
    }
    cout << res;
    return 0;
}