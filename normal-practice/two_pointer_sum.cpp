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

int target;
cin >> target;

sort(a.begin(), a.end());

int l = 0, r = n-1;
bool found = false;

while(l < r){
    int sum = a[l] + a[r];
    if(sum == target){
        found = true;
        break;
    }
    else if(sum < target) l++;
    else r--;
}

if(found) cout << "Yes\n";
else cout << "No\n";


return 0;
}
