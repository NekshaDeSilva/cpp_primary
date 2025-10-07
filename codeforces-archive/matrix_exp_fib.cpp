#include <iostream>
#include <vector>
using namespace std;


long long mod = 1e9+7;

vector<vector<long long>> multiply(vector<vector<long long>>& A, vector<vector<long long>>& B){
int n = A.size();
vector<vector<long long>> C(n, vector<long long>(n, 0));
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
for(int k=0;k<n;k++){
C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % mod;
}
}
}
return C;
}

vector<vector<long long>> matpow(vector<vector<long long>>& M, long long p){
int n = M.size();
vector<vector<long long>> res(n, vector<long long>(n, 0));
for(int i=0;i<n;i++) res[i][i] = 1;

while(p > 0){
if(p & 1) res = multiply(res, M);
M = multiply(M, M);
p >>= 1;
}
return res;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long n;
cin >> n;

vector<vector<long long>> M = {{1,1},{1,0}};
auto res = matpow(M, n);

cout << res[0][1] << endl;


return 0;
}
