#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;cin>>n>>m;
vector<string> g(n);
for(int i=0;i<n;i++) cin>>g[i];

vector<vector<int>> dp(n,vector<int>(m,0));
dp[0][0]=1;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(g[i][j]=='#') continue;
if(i>0) dp[i][j]+=dp[i-1][j];
if(j>0) dp[i][j]+=dp[i][j-1];
}
}
cout<<dp[n-1][m-1]<<endl;
return 0;
}
