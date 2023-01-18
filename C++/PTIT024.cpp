#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    string s; cin >> s;
    for(int i=0; i<s.size(); i++){
        if(check(i)) s[i] = '*';
    }
    cout << s << endl;
    return 0;
}

// 09:01
// 18/01/2023
// Made by VinhSeo