#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;
vector<vector<int>> adj(n+1);
vector<int> indegree(n+1, 0);

int m;
cin >> m;
for(int i=0;i<m;i++){
    int u,v;
    cin >> u >> v;
    adj[u].push_back(v);
    indegree[v]++;
}

vector<int> order;
vector<int> q;
for(int i=1;i<=n;i++){
    if(indegree[i] == 0) q.push_back(i);
}

while(!q.empty()){
    int u = q.back();
    q.pop_back();
    order.push_back(u);
    
    for(int v : adj[u]){
        indegree[v]--;
        if(indegree[v] == 0) q.push_back(v);
    }
}

if(order.size() != n){
    cout << "IMPOSSIBLE" << endl;
}
else{
    for(int x : order) cout << x << " ";
}

return 0;
}
