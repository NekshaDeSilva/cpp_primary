#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,q;
    cin >> n >> q;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    while(q--){
        int x;
        cin >> x;
        
        int lo = 0, hi = n-1;
        int ans = -1;
        
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid] <= x){
                ans = mid;
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        
        cout << ans+1 << "\n";
    }
    
    return 0;
}
