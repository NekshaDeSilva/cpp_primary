#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    if(n==0) return 0;
    
    int minPrice = prices[0];
    int profit = 0;
    
    for(int i=1;i<n;i++){
        profit = max(profit, prices[i] - minPrice);
        minPrice = min(minPrice, prices[i]);
    }
    return profit;
}

int main(){
    
    int n;cin>>n;
    vector<int> p(n);
    
    for(int i=0;  i<n;i++) cin>>p[i];
    
    cout << maxProfit(p) << "\n";
    
return 0;
}
