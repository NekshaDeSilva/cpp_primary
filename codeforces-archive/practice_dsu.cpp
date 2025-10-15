#include <iostream>
#include <vector>
using namespace std;

int par[1005];
int find(int x){return par[x]==x?x:par[x]=find(par[x]);}
void unite(int x,int y){par[find(x)]=find(y);}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;cin>>n>>m;
for(int i=1;i<=n;i++) par[i]=i;
for(int i=0;i<m;i++){
int a,b;cin>>a>>b;
unite(a,b);
}
int cnt=0;
for(int i=1;i<=n;i++) if(par[i]==i) cnt++;
cout<<cnt<<endl;
return 0;
}
