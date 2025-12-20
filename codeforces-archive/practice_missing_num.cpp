#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];

int missing=-1;
vector<bool> seen(n+2,false);
for(int i=0;i<n;i++) seen[a[i]]=true;
for(int i=1;i<=n+1;i++){
if(!seen[i]){missing=i;break;}
}
cout<<missing<<endl;
return 0;
}
