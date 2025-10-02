#include <iostream>
#include <vector>
using namespace std;


long long mod = 1e9+7;

long long power(long long a, long long b, long long m){
    long long res = 1;
    a %= m;
    while(b > 0){
        if(b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin >> t;

while(t--){
    long long a,b;
    cin >> a >> b;
    
    cout << power(a,b,mod) << "\n";
}

return 0;
}
