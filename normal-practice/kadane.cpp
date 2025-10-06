#include <iostream>
#include <vector>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;
    
vector<long long> a(n);
for(int i=0;i<n;i++) cin >> a[i];

long long maxSum = a[0];
long long curSum = a[0];

for(int i=1;i<n;i++){
curSum = max(a[i], curSum + a[i]);
maxSum = max(maxSum, curSum);
}

cout << maxSum << endl;


return 0;
}
