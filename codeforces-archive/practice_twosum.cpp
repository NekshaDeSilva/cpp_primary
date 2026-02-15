#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, target;
    cin >> n >> target;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    
    unordered_map<int,int> seen;
    for(int i = 0; i < n; i++){
        int need = target - arr[i];
        if(seen.count(need)){
            cout << seen[need]+1 << " " << i+1 << "\n";
            return 0;
        }
        seen[arr[i]] = i;
    }
    
    cout<<"IMPOSSIBLE\n";
    return 0;
}
