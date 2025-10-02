#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;

vector<long long> prefix(n+1);
prefix[0]=0;

for(int i=1;i<=n;i++){
    long long x;
    cin>>x;
    prefix[i] = prefix[i-1] + x;
}

int q;
cin>>q;

while(q--){
int l,r;
cin>>l>>r;
    
cout << prefix[r] - prefix[l-1] << "\n";
}

return 0;
}
