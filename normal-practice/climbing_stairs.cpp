#include <iostream>
#include <vector>
using namespace std;

long long mod = 1e9+7;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;

vector<long long> dp(n+1);
dp[0] = 1;
dp[1] = 1;

for(int i=2;i<=n;i++){
dp[i] = (dp[i-1] + dp[i-2]) % mod;
}

cout << dp[n] << endl;


return 0;
}
