#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> g;
vector<int> col;
bool ok=true;

void dfs(int u,int c){
col[u]=c;
for(int v:g[u]){
if(col[v]==-1) dfs(v,1-c);
else if(col[v]==c) ok=false;
}
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;cin>>n>>m;
g.resize(n+1);
col.resize(n+1,-1);

for(int i=0;i<m;i++){
int a,b;cin>>a>>b;
g[a].push_back(b);
g[b].push_back(a);
}

for(int i=1;i<=n;i++) if(col[i]==-1) dfs(i,0);
cout<<(ok?"YES":"NO")<<endl;
return 0;
}
