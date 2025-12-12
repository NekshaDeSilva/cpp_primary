#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n1,n2;cin>>n1;
vector<int> a(n1);
for(int i=0;i<n1;i++) cin>>a[i];
cin>>n2;
vector<int> b(n2);
for(int i=0;i<n2;i++) cin>>b[i];

int i=0,j=0;
while(i<n1&&j<n2){
if(a[i]<b[j]){cout<<a[i]<<" ";i++;}
else{cout<<b[j]<<" ";j++;}
}
while(i<n1){cout<<a[i]<<" ";i++;}
while(j<n2){cout<<b[j]<<" ";j++;}
return 0;
}
