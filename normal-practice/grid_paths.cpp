#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin >> n >> m;

vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

dp[1][1] = 1;
for(int i=1;i<=n;i++){
for(int j=1;j<=m;j++){
if(i==1 && j==1) continue;
dp[i][j] = dp[i-1][j] + dp[i][j-1];
}
}

cout << dp[n][m] << endl;


return 0;
}
