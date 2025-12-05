#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];

int second=0,first=0;
for(int i=0;i<n;i++){
if(a[i]>first){second=first;first=a[i];}
else if(a[i]>second&&a[i]!=first) second=a[i];
}
cout<<second<<endl;
return 0;
}
