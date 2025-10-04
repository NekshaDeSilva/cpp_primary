#include <iostream>
#include <vector>
#include <deque>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n, k;
cin >> n >> k;

vector<int> a(n);
for(int i=0;i<n;i++) cin >> a[i];

deque<int> dq;
vector<int> res;

for(int i=0;i<n;i++){
    while(!dq.empty() && dq.front() <= i-k){
        dq.pop_front();
    }
    while(!dq.empty() && a[dq.back()] <= a[i]){
        dq.pop_back();
    }
    dq.push_back(i);
    
    if(i >= k-1){
        res.push_back(a[dq.front()]);
    }
}

for(int x : res) cout << x << " ";


return 0;
}
