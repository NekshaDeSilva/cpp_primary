#include <iostream>
#include <vector>
using namespace std;


long long gcd(long long a, long long b){
    return b == 0 ? a : gcd(b, a%b);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;

vector<long long> a(n);
for(int i=0;i<n;i++) cin >> a[i];

long long g = a[0];
for(int i=1;i<n;i++){
    g = gcd(g, a[i]);
}

cout << g << endl;


return 0;
}
