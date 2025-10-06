#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin >> n >> m;

vector<vector<char>> grid(n, vector<char>(m));
vector<vector<bool>> vis(n, vector<bool>(m, false));

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin >> grid[i][j];
    }
}

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

auto dfs = [&](auto& self, int x, int y) -> void {
    vis[x][y] = true;
    for(int d=0;d<4;d++){
        int nx = x + dx[d];
        int ny = y + dy[d];
        if(nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny] && grid[nx][ny] == '.'){
            self(self, nx, ny);
        }
    }
};

int cnt = 0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(!vis[i][j] && grid[i][j] == '.'){
            dfs(dfs, i, j);
            cnt++;
        }
    }
}

cout << cnt << endl;

return 0;
}
