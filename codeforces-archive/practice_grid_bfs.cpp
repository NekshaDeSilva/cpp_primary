#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;cin>>n>>m;
vector<string> g(n);
for(int i=0;i<n;i++) cin>>g[i];

int sx,sy,ex,ey;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(g[i][j]=='A'){sx=i;sy=j;}
if(g[i][j]=='B'){ex=i;ey=j;}
}
}

vector<vector<int>> d(n,vector<int>(m,-1));
queue<pair<int,int>> q;
q.push({sx,sy});d[sx][sy]=0;

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

while(!q.empty()){
auto [x,y]=q.front();q.pop();
for(int i=0;i<4;i++){
int nx=x+dx[i],ny=y+dy[i];
if(nx>=0&&nx<n&&ny>=0&&ny<m&&d[nx][ny]==-1&&g[nx][ny]!='#'){
d[nx][ny]=d[x][y]+1;
q.push({nx,ny});
}
}
}
cout<<d[ex][ey]<<endl;
return 0;
}
