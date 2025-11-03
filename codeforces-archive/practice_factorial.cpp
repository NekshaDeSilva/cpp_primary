#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;cin>>n;
long long fact=1;
long long mod=1e9+7;
for(int i=2;i<=n;i++) fact=fact*i%mod;
cout<<fact<<endl;
return 0;
}
