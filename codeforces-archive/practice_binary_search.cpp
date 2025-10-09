#include <iostream>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++) cin >> arr[i];

int target;
cin >> target;

int lo=0, hi=n-1;
int ans=-1;
while(lo<=hi){
int mid=(lo+hi)/2;
if(arr[mid]==target){ans=mid;break;}
else if(arr[mid]<target) lo=mid+1;
else hi=mid-1;
}
cout << ans << endl;
return 0;
}
