#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> g;
vector<int> dep;

void dfs(int u,int p,int d){
dep[u]=d;
for(int v:g[u]) if(v!=p) dfs(v,u,d+1);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;cin>>n;
g.resize(n+1);
dep.resize(n+1);

for(int i=0;i<n-1;i++){
int a,b;cin>>a>>b;
g[a].push_back(b);
g[b].push_back(a);
}
dfs(1,0,0);
for(int i=1;i<=n;i++) cout<<dep[i]<<" ";
return 0;
}
