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

long long inv = 0;

auto merge = [&](vector<int>& arr, int l, int m, int r){
vector<int> tmp;
int i = l, j = m+1;
while(i <= m && j <= r){
if(arr[i] <= arr[j]){
tmp.push_back(arr[i++]);
}
else{
tmp.push_back(arr[j++]);
inv += m - i + 1;
}
}
while(i <= m) tmp.push_back(arr[i++]);
while(j <= r) tmp.push_back(arr[j++]);
for(int k=l;k<=r;k++) arr[k] = tmp[k-l];
};

function<void(int,int)> mergeSort = [&](int l, int r){
if(l >= r) return;
int m = (l+r)/2;
mergeSort(l, m);
mergeSort(m+1, r);
merge(a, l, m, r);
};

mergeSort(0, n-1);

cout << inv << endl;


return 0;
}
