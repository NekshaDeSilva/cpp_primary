
#include <iostream>
#include <vector>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;

vector<int> bit(n+1, 0);

auto update = [&](int i, int delta){
    for(; i<=n; i += i & (-i))
        bit[i] += delta;
};

auto query = [&](int i){
    int sum = 0;
    for(; i>0; i -= i & (-i))
        sum += bit[i];
    return sum;
};


for(int i=1;i<=n;i++){
    int x;
    cin >> x;
    update(i, x);
}

int q;
cin >> q;
while(q--){
    int t;
    cin >> t;
    if(t == 1){
        int k, u;
        cin >> k >> u;
        update(k, u);
    }
    else{
        int l, r;
        cin >> l >> r;
        cout << query(r) - query(l-1) << "\n";
    }
}


return 0;
}
