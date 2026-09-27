#include <iostream>
using namespace std;

int main() {
    int row, col;
    for (int i = 0; i < 25; i++) {
        int number;
        cin >> number;
        if (number == 1) {
            row = i / 5 + 1;
            col = i % 5;
            break;
        }
    }
    cout << abs(row - 3) + abs(col - 2);
    return 0;
}