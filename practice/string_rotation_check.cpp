#include <iostream>
#include <string>
using namespace std;

// check if s2 is rotation of s1
bool isRotation(string s1, string  s2){
    if(s1.length() != s2.length()) return false;
    
    string temp = s1 + s1;
    
    // just check if s2 is substring of temp
    if(temp.find(s2) != string::npos){
        return true;
    }
    return false;
}

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    
    if(isRotation(str1,str2)){
        cout << "Yes" << endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
    return 0;
}
