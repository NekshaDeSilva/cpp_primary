#include <iostream>
#include <vector>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;

vector<bool> isPrime(n+1, true);
isPrime[0] = isPrime[1] = false;

for(int i=2;i*i<=n;i++){
    if(isPrime[i]){
        for(int j=i*i;j<=n;j+=i){
            isPrime[j] = false;
        }
    }
}


int cnt = 0;
for(int i=2;i<=n;i++){
    if(isPrime[i]) cnt++;
}
cout << cnt << endl;

return 0;
}
