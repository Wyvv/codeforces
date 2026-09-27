#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> res(t);
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        string fields;
        cin >> fields;
        int counter = 0;
        
        for (int j = 0; j < n / k; j++) {
            bool counted = true;
            for (int l = 0; l < k; l++) {
                if (fields[l + j * k] == '0') {
                    counted = false;
                    break;
                }
            }
            if (counted) {
                counter++;
            }
        }
        res[i] = counter;
    }

    for (int i = 0; i < t; i++) {
        cout << res[i] << "\n";
    }

    return 0;
}