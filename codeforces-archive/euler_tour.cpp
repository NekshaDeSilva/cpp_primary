#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<int>> adj;
vector<int> tin, tout;
int timer = 0;

void dfs(int u, int p){
    tin[u] = timer++;
    for(int v : adj[u]){
        if(v != p) dfs(v,u);
    }
    tout[u] = timer++;
}

bool isAncestor(int u, int v){
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;
adj.resize(n+1);
tin.resize(n+1);
tout.resize(n+1);

for(int i=0;i<n-1;i++){
    int u,v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}

dfs(1,0);

int q;
cin >> q;
while(q--){
    int u,v;
    cin >> u >> v;
    cout << (isAncestor(u,v) ? "Yes" : "No") << "\n";
}


return 0;
}
