#include <iostream>
#include <vector>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);


int n;
cin >> n;

vector<int> a(n);
for(int i=0;i<n;i++) cin >> a[i];

vector<int> pmax(n), smax(n);

pmax[0] = a[0];
for(int i=1;i<n;i++){
pmax[i] = max(pmax[i-1], a[i]);
}

smax[n-1] = a[n-1];
for(int i=n-2;i>=0;i--){
smax[i] = max(smax[i+1], a[i]);
}

for(int i=0;i<n;i++){
cout << pmax[i] << " " << smax[i] << "\n";
}


return 0;
}
