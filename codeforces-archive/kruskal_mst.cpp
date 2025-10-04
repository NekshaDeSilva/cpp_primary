#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct Edge{
    int u, v, w;
};

int parent[100005];
int rnk[100005];

int find(int x){
    if(parent[x] != x) parent[x] = find(parent[x]);
    return parent[x];
}

void unite(int x, int y){
    int px = find(x), py = find(y);
    if(px == py) return;
    if(rnk[px] < rnk[py]) swap(px, py);
    parent[py] = px;
    if(rnk[px] == rnk[py]) rnk[px]++;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin >> n >> m;

for(int i=1;i<=n;i++){
    parent[i] = i;
    rnk[i] = 0;
}

vector<Edge> edges(m);
for(int i=0;i<m;i++){
    cin >> edges[i].u >> edges[i].v >> edges[i].w;
}

sort(edges.begin(), edges.end(), [](Edge a, Edge b){
    return a.w < b.w;
});

long long total = 0;
int cnt = 0;

for(Edge e : edges){
    if(find(e.u) != find(e.v)){
        unite(e.u, e.v);
        total += e.w;
        cnt++;
    }
}

if(cnt != n-1) cout << "IMPOSSIBLE" << endl;
else cout << total << endl;


return 0;
}
