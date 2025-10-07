#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;

if(n <= 1){
cout << "NO" << endl;
return 0;
}

bool isPrime = true;
for(int i=2;i*i<=n;i++){
if(n % i == 0){
isPrime = false;
break;
}
}

if(isPrime) cout << "YES" << endl;
else cout << "NO" << endl;


return 0;
}
