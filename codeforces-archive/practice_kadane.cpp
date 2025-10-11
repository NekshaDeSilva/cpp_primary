#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;cin>>n;
vector<long long> a(n);
for(int i=0;i<n;i++) cin>>a[i];

long long cur=a[0],best=a[0];
for(int i=1;i<n;i++){
cur=max(a[i],cur+a[i]);
best=max(best,cur);
}
cout<<best<<endl;
return 0;
}
