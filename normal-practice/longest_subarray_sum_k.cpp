#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,k;
cin>>n>>k;

vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}

map<long long,int> prefixIdx;
long long sum = 0;
int maxLen = 0;

prefixIdx[0] = -1;

for(int i = 0; i < n; i++){
    sum += a[i];
    
    if(prefixIdx.find(sum - k) != prefixIdx.end()){
        int len = i - prefixIdx[sum-k];
        maxLen = max(maxLen, len);
    }
    
    if(prefixIdx.find(sum) == prefixIdx.end()){
        prefixIdx[sum] = i;
    }
}

cout << maxLen << "\n";
return 0;
}
