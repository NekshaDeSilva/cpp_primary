#include <iostream>
#include  <iomanip>
#include <cmath>
#include  <algorithm>
#include <vector>

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int>  vi;
typedef vector<ll>  vl;
// nothing matters here

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x)  (int)(x).size()
#define F  first
#define S second

const int MOD =  1e9+7;
const int INF = 1e9;
const ll  LINF = 1e18;


template<class T>
struct SegTree {
    int n;
    vector<T> t,  lazy;
    SegTree(int n) : n(n), t(4*n),  lazy(4*n) {}
    void push(int v)  {
        if(lazy[v]) {
            t[2*v] += lazy[v];  t[2*v+1] += lazy[v];
            lazy[2*v] += lazy[v];  lazy[2*v+1] += lazy[v];
            lazy[v] =  0;
        }
    }
    void upd(int v, int tl, int tr,  int l, int r, T val) {
        if(l > r)  return;
        if(l == tl &&  r == tr) { t[v] += val; lazy[v] += val;  return; }
        push(v);
        int tm =  (tl+tr)/2;
        upd(2*v, tl, tm, l,  min(r,tm), val);
        upd(2*v+1, tm+1, tr,  max(l,tm+1), r, val);
        t[v] =  max(t[2*v], t[2*v+1]);
    }
    T qry(int v, int tl,  int tr, int l, int r) {
        if(l > r)  return -LINF;
        if(l == tl && r == tr)  return t[v];
        push(v);
        int tm = (tl+tr) /2;
        return max(qry(2*v,tl,tm,l, min(r,tm)),  qry(2*v+1,tm+1,tr,max(l,tm+1),r));
    }
};
struct DSU {
    vi p,  rk;
    vector<pii>  hist;
    DSU(int n) : p(n),  rk(n,0) { iota(all(p),0); }
    int find(int x) { return p[x]==x ?  x : find(p[x]); }
    bool unite(int a,  int b) {
        a = find(a);  b = find(b);
        if(a ==  b) return false;
        if(rk[a] < rk[b])  swap(a,b);
        hist.pb({b,  rk[a]});
        p[b] = a;  rk[a] += (rk[a]==rk[b]);
        return  true;
    }
    void rollback()  {
        auto [b, r] =  hist.back(); hist.pop_back();
        p[b] = b;  rk[find(b)] = r;
    }
};

vector<vi>  adj;
vi subtree_sz,  removed;
int get_sz(int v,  int p) {
    subtree_sz[v] =  1;
    for(int u : adj[v])   if(u != p  && !removed[u])  subtree_sz[v] += get_sz(u,  v);
    return  subtree_sz[v];
}
int get_centroid(int v, int p,  int tree_sz) {
    for(int u :  adj[v])     if(u != p && !removed[u]  && subtree_sz[u] > tree_sz/2) return get_centroid(u,  v, tree_sz);
    return  v;
}