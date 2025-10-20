#include <iostream>
#include <map>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;cin>>n;
map<int,int> freq;
for(int i=0;i<n;i++){
int x;cin>>x;
freq[x]++;
}
for(auto p:freq) cout<<p.first<<" "<<p.second<<"\n";
return 0;
}
