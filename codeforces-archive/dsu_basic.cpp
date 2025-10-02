#include <iostream>
#include <vector>
using namespace std;


class DSU{
public:
    vector<int> parent, rank_;
    
    DSU(int n){
        parent.resize(n+1);
        rank_.resize(n+1,0);
        for(int i=0;i<=n;i++) parent[i]=i;
    }
    
    int find(int x){
        if(parent[x]!=x) parent[x]=find(parent[x]);
        return parent[x];
    }
    
    void unite(int x, int y){
        int px=find(x), py=find(y);
        if(px==py) return;
        if(rank_[px]<rank_[py]) swap(px,py);
        parent[py]=px;
        if(rank_[px]==rank_[py]) rank_[px]++;
    }
};


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;
cin >> n >> m;

DSU dsu(n);

for(int i=0;i<m;i++){
    int t,a,b;
    cin >> t >> a >> b;
    
    if(t==0){
        dsu.unite(a,b);
    }
    else{
        if(dsu.find(a)==dsu.find(b)) cout << "Yes\n";
        else cout << "No\n";
    }
}

return 0;
}
