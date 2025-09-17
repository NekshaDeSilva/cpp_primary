#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        
        for(int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        bool possible = true;
        for(int i = 0; i < n; i++) {
            int count = 0;
            for(int k = 1; k <= n; k++) {
                // For operation of length k, can position i be included?
                // Need: max(0, i-k+1) <= min(i, n-k)
                int left_bound = max(0, i - k + 1);
                int right_bound = min(i, n - k);
                if(left_bound <= right_bound) {
                    count++;
                }
            }
            
            if(p[i] > count) {
                possible = false;
                break;
            }
        }
        
        cout << (possible ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
// IM SHAMEFUL ABOUT THIS. THIS IS NOT MY EFFORT, FOOL, YOU DUMB FOOL. 
//YOU CAN REMOVE THIS LIKE ONLY AFTER SOLVING DIV4,3,2 problems, each one perfectly. fool. go!