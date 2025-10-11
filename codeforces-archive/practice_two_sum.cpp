#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,x;cin>>n>>x;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];
sort(a.begin(),a.end());

int l=0,r=n-1;
while(l<r){
int s=a[l]+a[r];
if(s==x){cout<<"YES"<<endl;return 0;}
else if(s<x) l++;
else r--;
}
cout<<"NO"<<endl;
return 0;
}
