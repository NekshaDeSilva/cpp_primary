#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];

int maxLen=1,curLen=1;
for(int i=1;i<n;i++){
if(a[i]==a[i-1]+1) curLen++;
else curLen=1;
maxLen=max(maxLen,curLen);
}
cout<<maxLen<<endl;
return 0;
}
