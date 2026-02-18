//cf round 1051 div3 problem B
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<long long> v(n);
        for(int i = 0;i < n; i++){
            cin >> v[i];
        }
        
        sort(v.begin(),  v.end());
        
        // check if we can make all equal
        long long median = v[n/2];
        long long totalCost = 0;
        
        for(int i=0;i<n;i++){
            totalCost += abs(v[i]-median);
        }
        
        cout << totalCost << "\n";
    }
    
    return 0;
}
