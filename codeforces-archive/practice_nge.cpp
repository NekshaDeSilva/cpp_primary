#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];

vector<int> nge(n,-1);
stack<int> st;
for(int i=n-1;i>=0;i--){
while(!st.empty()&&a[st.top()]<=a[i]) st.pop();
if(!st.empty()) nge[i]=st.top();
st.push(i);
}
for(int i=0;i<n;i++) cout<<nge[i]<<" ";
return 0;
}
