#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> res(n);
    map<int, int> count = {};
    for (int i = 0; i < n; i++) {
        count.clear();
        int length;
        cin >> length;
        int largest = 0;
        for (int j = 0; j < length; j++) {
            int value;
            cin >> value;
            
            if (value % 2 == 0) {
                count[value % 4] += 1;
                if (count[value % 4] > largest) {
                    largest = count[value % 4];
                }
            } else {
                count[1] += 1;
                if (count[1] > largest) {
                    largest = count[1];
                }
            }
        }
        res[i] = largest;
    }    
    for (int i = 0; i < n; i++) {
        cout << res[i] << "\n";
    }

    return 0;
}