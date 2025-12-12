#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,k;cin>>n>>k;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];

k=k%n;
vector<int> b(n);
for(int i=0;i<n;i++) b[(i+k)%n]=a[i];
for(int i=0;i<n;i++) cout<<b[i]<<" ";
return 0;
}
