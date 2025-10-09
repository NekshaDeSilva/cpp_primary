#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];

vector<int> pre(n+1);
pre[0]=0;
for(int i=1;i<=n;i++) pre[i]=pre[i-1]+a[i-1];

int l,r;
cin>>l>>r;
cout << pre[r]-pre[l-1] << endl;
return 0;
}
