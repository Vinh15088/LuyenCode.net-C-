#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b; cin >> a >> b;
    string s = "";
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i]) s += '1';
        else s += '0';
    }
    while(s[0]=='0') s.erase(s.begin());
    cout << s << endl;
    return 0;
}

// 10:16
// 15/01/2023
// Made by VinhSeo