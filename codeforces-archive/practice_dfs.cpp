#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> g;
vector<bool> vis;

void dfs(int u){
vis[u]=true;
for(int v:g[u]) if(!vis[v]) dfs(v);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin>>n>>m;
g.resize(n+1);
vis.resize(n+1,false);

for(int i=0;i<m;i++){
int u,v;cin>>u>>v;
g[u].push_back(v);
g[v].push_back(u);
}

int cnt=0;
for(int i=1;i<=n;i++){
if(!vis[i]){dfs(i);cnt++;}
}
cout<<cnt<<endl;
return 0;
}
