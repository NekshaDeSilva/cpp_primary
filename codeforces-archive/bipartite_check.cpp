#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<int>> adj;
vector<int> color;
bool bipartite = true;

void dfs(int u, int c){
color[u] = c;
for(int v : adj[u]){
if(color[v] == -1){
dfs(v, 1-c);
}
else if(color[v] == c){
bipartite = false;
}
}
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int m;
cin >> n >> m;

adj.resize(n+1);
color.resize(n+1, -1);

for(int i=0;i<m;i++){
int u,v;
cin >> u >> v;
adj[u].push_back(v);
adj[v].push_back(u);
}

for(int i=1;i<=n;i++){
if(color[i] == -1){
dfs(i, 0);
}
}

if(bipartite) cout << "YES" << endl;
else cout << "NO" << endl;


return 0;
}
