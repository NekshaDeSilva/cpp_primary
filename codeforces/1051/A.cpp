#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// --- IOI-Ready Template ---

// For fast I/O
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}

// The solve function contains the logic for a single test case
void solve() {
    int n;
    std::cin >> n;

    // --- Your Logic Here ---
    // For a + b = n, where a > 0 and b > 0:
    // 'a' can be any integer from 1 to n-1.
    // For each 'a', 'b' is fixed (b = n - a).
    // So there are n-1 possible pairs.
    int result = n - 1;
    std::cout << result << "\n";
}

int main() {
    fast_io();

    int t; // Number of test cases
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
