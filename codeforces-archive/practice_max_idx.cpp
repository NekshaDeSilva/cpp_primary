#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];

int idx=0;
for(int i=1;i<n;i++){
if(a[i]>a[idx]) idx=i;
}
cout<<idx<<endl;
return 0;
}
