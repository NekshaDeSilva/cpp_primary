#include <iostream>
using namespace std;

long long gcd(long long a,long long b){
return b==0?a:gcd(b,a%b);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long a,b;
cin>>a>>b;
cout<<gcd(a,b)<<endl;
return 0;
}
