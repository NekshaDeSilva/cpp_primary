#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct E{int u,v,w;};
int p[1005];
int find(int x){return p[x]==x?x:p[x]=find(p[x]);}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;cin>>n>>m;
for(int i=1;i<=n;i++) p[i]=i;

vector<E> e(m);
for(int i=0;i<m;i++) cin>>e[i].u>>e[i].v>>e[i].w;
sort(e.begin(),e.end(),[](E a,E b){return a.w<b.w;});

long long tot=0;
int cnt=0;
for(auto x:e){
if(find(x.u)!=find(x.v)){
p[find(x.u)]=find(x.v);
tot+=x.w;
cnt++;
}
}
if(cnt!=n-1) cout<<"IMPOSSIBLE"<<endl;
else cout<<tot<<endl;
return 0;
}
