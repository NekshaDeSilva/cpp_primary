#include <iostream>
#include <vector>
using namespace std;

long long mod=1e9+7;
vector<vector<long long>> mul(vector<vector<long long>>&A,vector<vector<long long>>&B){
int n=A.size();
vector<vector<long long>> C(n,vector<long long>(n,0));
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
for(int k=0;k<n;k++)
C[i][j]=(C[i][j]+A[i][k]*B[k][j])%mod;
return C;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long n;cin>>n;
vector<vector<long long>> M={{1,1},{1,0}};
vector<vector<long long>> R={{1,0},{0,1}};

while(n>0){
if(n&1) R=mul(R,M);
M=mul(M,M);
n>>=1;
}
cout<<R[0][1]<<endl;
return 0;
}
