#include <iostream>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long n;cin>>n;
int cnt=0;
while(n>0){
if(n&1) cnt++;
n>>=1;
}
cout<<cnt<<endl;
return 0;
}
