#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;
vector<int> a(n);
for(int i=0;i<n;i++) cin >> a[i];

sort(a.begin(), a.end());

int median;
if(n % 2 == 1) median = a[n/2];
else median = (a[n/2-1] + a[n/2]) / 2;

long long sum = 0;
for(int i=0;i<n;i++){
sum += abs(a[i] - median);
}

cout << sum << endl;


return 0;
}
