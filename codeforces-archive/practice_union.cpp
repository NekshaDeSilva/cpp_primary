#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n1,n2;cin>>n1;
set<int> s;
for(int i=0;i<n1;i++){int x;cin>>x;s.insert(x);}
cin>>n2;
for(int i=0;i<n2;i++){int x;cin>>x;s.insert(x);}
for(int x:s) cout<<x<<" ";
return 0;
}
