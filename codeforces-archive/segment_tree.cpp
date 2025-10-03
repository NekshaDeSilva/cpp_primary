#include <iostream>
#include <vector>
using namespace std;

vector<int> tree;

void build(vector<int>& a, int v, int tl, int tr){
    if(tl == tr){
        tree[v] = a[tl];
        return;
    }
    int tm = (tl + tr) / 2;
    build(a, v*2, tl, tm);
    build(a, v*2+1, tm+1, tr);
    tree[v] = tree[v*2] + tree[v*2+1];
}

int query(int v, int tl, int tr, int l, int r){
    if(l > r) return 0;
    if(l == tl && r == tr) return tree[v];
    int tm = (tl + tr) / 2;
    return query(v*2, tl, tm, l, min(r, tm)) + 
           query(v*2+1, tm+1, tr, max(l, tm+1), r);
}

void update(int v, int tl, int tr, int pos, int val){
    if(tl == tr){
        tree[v] = val;
        return;
    }
    int tm = (tl + tr) / 2;
    if(pos <= tm) update(v*2, tl, tm, pos, val);
    else update(v*2+1, tm+1, tr, pos, val);
    tree[v] = tree[v*2] + tree[v*2+1];
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,q;
cin >> n >> q;

vector<int> a(n);
for(int i=0;i<n;i++) cin >> a[i];

tree.resize(4*n);
build(a, 1, 0, n-1);

while(q--){
    int t;
    cin >> t;
    if(t == 1){
        int k,u;
        cin >> k >> u;
        update(1, 0, n-1, k-1, u);
    }
    else{
        int l,r;
        cin >> l >> r;
        cout << query(1, 0, n-1, l-1, r-1) << "\n";
    }
}


return 0;
}
