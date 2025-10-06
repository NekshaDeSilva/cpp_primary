#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin >> n >> m;

vector<string> grid(n);
for(int i=0;i<n;i++) cin >> grid[i];

int sr,sc,er,ec;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(grid[i][j]=='A'){sr=i;sc=j;}
if(grid[i][j]=='B'){er=i;ec=j;}
}
}

vector<vector<int>> dist(n, vector<int>(m, -1));
queue<pair<int,int>> q;
q.push({sr,sc});
dist[sr][sc] = 0;

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

while(!q.empty()){
auto [x,y] = q.front();
q.pop();
for(int d=0;d<4;d++){
int nx=x+dx[d], ny=y+dy[d];
if(nx>=0 && nx<n && ny>=0 && ny<m && dist[nx][ny]==-1 && grid[nx][ny]!='#'){
dist[nx][ny] = dist[x][y]+1;
q.push({nx,ny});
}
}
}

cout << dist[er][ec] << endl;


return 0;
}
