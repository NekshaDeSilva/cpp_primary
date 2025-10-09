#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin>>n>>m;
vector<vector<int>> g(n+1);
for(int i=0;i<m;i++){
int u,v;cin>>u>>v;
g[u].push_back(v);
g[v].push_back(u);
}

vector<int> d(n+1,-1);
queue<int> q;
q.push(1);
d[1]=0;

while(!q.empty()){
int u=q.front();q.pop();
for(int v:g[u]){
if(d[v]==-1){d[v]=d[u]+1;q.push(v);}
}
}
for(int i=1;i<=n;i++) cout<<d[i]<<" ";
return 0;
}
