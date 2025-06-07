#include <iostream>
#include <vector>
#include <unordered_map>
#include <tuple>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int m;
        cin >> m;
        vector<string> people(m);
        vector<unordered_map<char, int>> freq(m);

        for (int i = 0; i < m; ++i) {
            cin >> people[i];
            for (char c : people[i]) freq[i][c]++;
        }

        // over[x][y] means: too much x, missing y
        vector<int> over[3][3];
        auto id = [](char c) {
            if (c == 'w') return 0;
            if (c == 'i') return 1;
            return 2;
        };
        char rev[3] = {'w', 'i', 'n'};

        for (int i = 0; i < m; ++i) {
            for (int x = 0; x < 3; ++x) {
                if (freq[i][rev[x]] > 1) {
                    for (int y = 0; y < 3; ++y) {
                        if (freq[i][rev[y]] == 0) {
                            over[x][y].push_back(i);
                        }
                    }
                }
            }
        }

        vector<tuple<int, char, int, char>> ops;

        // Direct swaps
        for (int x = 0; x < 3; ++x) {
            for (int y = 0; y < 3; ++y) {
                if (x == y) continue;
                while (!over[x][y].empty() && !over[y][x].empty()) {
                    int a = over[x][y].back(); over[x][y].pop_back();
                    int b = over[y][x].back(); over[y][x].pop_back();
                    ops.emplace_back(a+1, rev[x], b+1, rev[y]);
                }
            }
        }

        // Indirect swaps (chain fixes)
        for (int x = 0; x < 3; ++x) {
            for (int y = 0; y < 3; ++y) {
                for (int z = 0; z < 3; ++z) {
                    if (x == y || y == z || x == z) continue;
                    while (!over[x][y].empty() && !over[y][z].empty()) {
                        int a = over[x][y].back(); over[x][y].pop_back();
                        int b = over[y][z].back(); over[y][z].pop_back();
                        ops.emplace_back(a+1, rev[x], b+1, rev[y]);
                        over[x][z].push_back(a); // a still needs fix
                    }
                }
            }
        }

        cout << ops.size() << '\n';
        for (auto [a1, c1, a2, c2] : ops) {
            cout << a1 << ' ' << c1 << ' ' << a2 << ' ' << c2 << '\n';
        }
    }
return 0;
//over
    
}
