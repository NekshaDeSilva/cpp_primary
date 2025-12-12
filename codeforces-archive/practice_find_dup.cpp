#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];

int dup=-1;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(a[i]==a[j]){dup=a[i];break;}
}
if(dup!=-1) break;
}
cout<<dup<<endl;
return 0;
}
