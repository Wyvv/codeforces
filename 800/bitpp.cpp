#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 0;
    for (int i = 0; i < n;i++) {
        string line;
        cin >> line;
        for (char c : line) {
            if (c == '+') {
                res++;
                break;
            } 
            if (c == '-') {
                res--;
                break;
            }
        }
    }

    cout << res;
    return 0;
}