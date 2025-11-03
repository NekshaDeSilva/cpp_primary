#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;cin>>n;
vector<pair<int,int>> a(n);
for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;

sort(a.begin(),a.end(),[](auto x,auto y){return x.second<y.second;});

int cnt=0,last=-1e9;
for(int i=0;i<n;i++){
if(a[i].first>=last){
cnt++;
last=a[i].second;
}
}
cout<<cnt<<endl;
return 0;
}
