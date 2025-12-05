#include <iostream>
#include <string>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;cin>>s;
int cnt[26]={0};
for(char c:s) cnt[c-'a']++;
for(int i=0;i<26;i++){
if(cnt[i]>0) cout<<(char)('a'+i)<<":"<<cnt[i]<<"\n";
}
return 0;
}
