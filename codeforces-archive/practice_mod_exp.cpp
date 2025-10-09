#include <iostream>
using namespace std;

long long mod=1e9+7;

long long power(long long a,long long b){
long long res=1;
a%=mod;
while(b>0){
if(b&1) res=res*a%mod;
a=a*a%mod;
b>>=1;
}
return res;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long a,b;
cin>>a>>b;
cout<<power(a,b)<<endl;
return 0;
}
