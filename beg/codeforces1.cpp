#include <iostream>
#include <vector>
using namespace std;

bool canFormDate(const vector<int>& freq) {
    return freq[0] >= 3 &&
           freq[1] >= 1 &&
           freq[2] >= 2 &&
           freq[3] >= 1 &&
           freq[5] >= 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> digits(n);
        vector<int> freq(10, 0); // digit frequencies 0 to 9

        for (int i = 0; i < n; ++i) {
            cin >> digits[i];
        }

        bool found = false;
        for (int i = 0; i < n; ++i) {
            freq[digits[i]]++;
            if (i >= 7 && canFormDate(freq)) {
                cout << i + 1 << endl; // 1-based step
                found = true;
                break;
            }
        }

        if (!found)
            cout << 0 << endl;
    }

    return 0;
}
