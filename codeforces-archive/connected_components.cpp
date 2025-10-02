#include <iostream>
#include <vector>
using namespace std;

int n,m;
vector<vector<int>> adj;
vector<bool> visited;

void dfs(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> m;
adj.resize(n+1);
visited.resize(n+1,false);

for(int i=0;i<m;i++){
    int u,v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int components = 0;
for(int i=1;i<=n;i++){
    if(!visited[i]){
        dfs(i);
        components++;
    }
}

cout << components << endl;

return 0;
}
