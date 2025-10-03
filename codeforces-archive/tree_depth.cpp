#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<int>> adj;
vector<int> depth;

void dfs(int u, int p, int d){
depth[u] = d;
for(int v : adj[u]){
    if(v != p) dfs(v, u, d+1);
}
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;
adj.resize(n+1);
depth.resize(n+1);

for(int i=0;i<n-1;i++){
    int u,v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}

dfs(1, 0, 0);

for(int i=1;i<=n;i++){
    cout << depth[i] << " ";
}

return 0;
}
