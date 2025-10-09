#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef pair<long long,int> pli;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin>>n>>m;
vector<vector<pli>> g(n+1);

for(int i=0;i<m;i++){
int u,v;long long w;
cin>>u>>v>>w;
g[u].push_back({w,v});
g[v].push_back({w,u});
}

vector<long long> d(n+1,1e18);
priority_queue<pli,vector<pli>,greater<pli>> pq;
d[1]=0;
pq.push({0,1});

while(!pq.empty()){
auto [dist,u]=pq.top();pq.pop();
if(dist>d[u]) continue;
for(auto [w,v]:g[u]){
if(d[u]+w<d[v]){
d[v]=d[u]+w;
pq.push({d[v],v});
}
}
}
for(int i=1;i<=n;i++) cout<<d[i]<<" ";
return 0;
}
