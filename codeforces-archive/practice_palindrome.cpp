#include <iostream>
#include <string>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;cin>>s;
int n=s.size();
int cnt=0;
for(int i=0;i<n;i++){
int l=i,r=i;
while(l>=0&&r<n&&s[l]==s[r]){cnt++;l--;r++;}
l=i;r=i+1;
while(l>=0&&r<n&&s[l]==s[r]){cnt++;l--;r++;}
}
cout<<cnt<<endl;
return 0;
}
