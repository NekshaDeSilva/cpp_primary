#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;
    
set<int> s;
vector<int> a(n);

for(int i=0;i<n;i++){
cin >> a[i];
s.insert(a[i]);
}

cout << s.size() << "\n";


return 0;
}
