#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;cin>>n;
vector<vector<int>> a(n,vector<int>(n));
for(int i=0;i<n;i++)
for(int j=0;j<n;j++) cin>>a[i][j];

long long sum=0;
for(int i=0;i<n;i++) sum+=a[i][i];
cout<<sum<<endl;
return 0;
}
