#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;cin>>n>>m;
vector<vector<long long>> d(n+1,vector<long long>(n+1,1e18));

for(int i=1;i<=n;i++) d[i][i]=0;
for(int i=0;i<m;i++){
int u,v;long long w;cin>>u>>v>>w;
d[u][v]=min(d[u][v],w);
d[v][u]=min(d[v][u],w);
}

for(int k=1;k<=n;k++){
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
if(d[i][k]<1e18&&d[k][j]<1e18)
d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}
}
}

int q;cin>>q;
while(q--){
int a,b;cin>>a>>b;
if(d[a][b]>=1e18) cout<<-1<<"\n";
else cout<<d[a][b]<<"\n";
}
return 0;
}
