#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;cin>>n>>m;
vector<vector<int>> g(n+1);
vector<int> ind(n+1,0);

for(int i=0;i<m;i++){
int a,b;cin>>a>>b;
g[a].push_back(b);
ind[b]++;
}

vector<int> q,res;
for(int i=1;i<=n;i++) if(ind[i]==0) q.push_back(i);

while(!q.empty()){
int u=q.back();q.pop_back();
res.push_back(u);
for(int v:g[u]){
ind[v]--;
if(ind[v]==0) q.push_back(v);
}
}
for(int x:res) cout<<x<<" ";
return 0;
}
