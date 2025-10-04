#include <iostream>
#include <vector>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;

vector<long long> fact(n+1);
fact[0] = 1;
long long mod = 1e9+7;

for(int i=1;i<=n;i++){
fact[i] = fact[i-1] * i % mod;
}


cout << fact[n] << endl;

return 0;
}
