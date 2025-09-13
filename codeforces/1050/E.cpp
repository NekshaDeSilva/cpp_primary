#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <deque>

// For fast I/O
void setup_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

// Data types and aliases
using ll = long long;
using vi = std::vector<int>;
using vll = std::vector<ll>;
using pii = std::pair<int, int>;
using pll = std::pair<ll, ll>;

// Macros for loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

// Main problem-solving logic function
void solve() {
    // Write your solution here
    int n;
    std::cin >> n;
    // ...
}

int main() {
    setup_io();
    
    int t = 1; // Default to 1 test case
    // std::cin >> t; // Uncomment this line if there are multiple test cases

    while (t--) {
        solve();
    }
    
    return 0;
}