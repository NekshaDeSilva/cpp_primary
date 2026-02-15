#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

void solve(){
    int n;
    cin>>n;
    
    vi arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    
    // find longest strictly increasing subseq ending at each pos
    vector<int> dp(n, 1);
    
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j] < arr[i]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    
    int ans = *max_element(dp.begin(), dp.end());
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;cin>>tc;
    while(tc--) solve();
    
    return 0;
}
