#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];

int mx=0,mn=1e9;
for(int i=0;i<n;i++){
mx=max(mx,a[i]);
mn=min(mn,a[i]);
}
cout<<mn<<" "<<mx<<endl;
return 0;
}
