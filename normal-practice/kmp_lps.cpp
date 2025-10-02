#include <iostream>
#include <string>
using namespace std;


int main(){
    
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin >> s;
int n = s.size();

vector<int> lps(n,0);
int len = 0;
int i = 1;

while(i < n){
    if(s[i] == s[len]){
        len++;
        lps[i] = len;
        i++;
    }
    else{
        if(len != 0){
            len = lps[len-1];
        }
        else{
            lps[i] = 0;
            i++;
        }
    }
}


for(int i=0;i<n;i++){
    cout << lps[i] << " ";
}
cout << endl;

return 0;
}
