#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> sticks(n);
    for (int i = 0; i < n; ++i) {
        cin >> sticks[i];
    }

    sort(sticks.begin(), sticks.end(), greater<long long>());

    for (int i = 0; i < n - 2; ++i) {
        // Check if sticks[i], sticks[i+1], sticks[i+2] can form a triangle
        if (sticks[i] < sticks[i+1] + sticks[i+2]) {
            cout << sticks[i] + sticks[i+1] + sticks[i+2] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}