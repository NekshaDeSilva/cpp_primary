#include <iostream>
#include <vector>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin >> n >> m;

vector<vector<long long>> dist(n+1, vector<long long>(n+1, 1e18));

for(int i=1;i<=n;i++) dist[i][i] = 0;

for(int i=0;i<m;i++){
int u,v;
long long w;
cin >> u >> v >> w;
dist[u][v] = min(dist[u][v], w);
dist[v][u] = min(dist[v][u], w);
}

for(int k=1;k<=n;k++){
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
if(dist[i][k] < 1e18 && dist[k][j] < 1e18){
dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
}
}
}
}

int q;
cin >> q;
while(q--){
int a,b;
cin >> a >> b;
if(dist[a][b] >= 1e18) cout << -1 << "\n";
else cout << dist[a][b] << "\n";
}


return 0;
}
