#include <iostream>
#include <vector>
using namespace std;

int bit[100005];
int n;

void update(int i,int d){for(;i<=n;i+=i&(-i)) bit[i]+=d;}
int query(int i){int s=0;for(;i>0;i-=i&(-i)) s+=bit[i];return s;}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin>>n;
for(int i=1;i<=n;i++){int x;cin>>x;update(i,x);}

int q;cin>>q;
while(q--){
int t;cin>>t;
if(t==1){int k,u;cin>>k>>u;update(k,u);}
else{int l,r;cin>>l>>r;cout<<query(r)-query(l-1)<<"\n";}
}
return 0;
}
