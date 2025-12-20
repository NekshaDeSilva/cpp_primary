#include <iostream>
#include <string>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;cin>>s;
bool pal=true;
int n=s.size();
for(int i=0;i<n/2;i++){
if(s[i]!=s[n-1-i]){pal=false;break;}
}
cout<<(pal?"YES":"NO")<<endl;
return 0;
}
