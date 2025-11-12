#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];
int xr=0;
for(int i=0;i<n;i++) xr^=a[i];
if(xr==0) cout<<"second"<<endl;
else cout<<"first"<<endl;
return 0;
}
