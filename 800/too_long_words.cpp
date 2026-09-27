#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<string> words = {};
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        words.push_back(word);
    }
    for (int i = 0; i < n; i++) {
        string word = words.at(i);
        int l = word.length();
        if (l > 10) {
            cout << word.at(0) << l - 2 << word.at(l-1) << "\n";
        } else {
            cout << word << "\n";
        }
    }
    return 0;
}