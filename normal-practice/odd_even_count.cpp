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

int oddCnt = 0, evenCnt = 0;
for(int i=0;i<n;i++){
if(a[i] % 2 == 0) evenCnt++;
else oddCnt++;
}

cout << oddCnt << " " << evenCnt << endl;


return 0;
}
