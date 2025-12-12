#include <iostream>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long n;cin>>n;
bool power2 = (n>0) && ((n&(n-1))==0);
cout<<(power2?"YES":"NO")<<endl;
return 0;
}
