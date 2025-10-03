#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef pair<long long, int> pli;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin >> n >> m;

vector<vector<pli>> adj(n+1);

for(int i=0;i<m;i++){
    int u,v;
    long long w;
    cin >> u >> v >> w;
    adj[u].push_back({w,v});
    adj[v].push_back({w,u});
}

vector<long long> dist(n+1, 1e18);
priority_queue<pli, vector<pli>, greater<pli>> pq;

dist[1] = 0;
pq.push({0, 1});

while(!pq.empty()){
    auto [d,u] = pq.top();
    pq.pop();
    
    if(d > dist[u]) continue;
    
    for(auto [w,v] : adj[u]){
        if(dist[u] + w < dist[v]){
            dist[v] = dist[u] + w;
            pq.push({dist[v], v});
        }
    }
}


for(int i=1;i<=n;i++){
    cout << dist[i] << " ";
}

return 0;
}
