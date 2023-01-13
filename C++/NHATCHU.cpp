#include<bits/stdc++.h>
using namespace std;
string a[10001];
int main(){
    string s; cin >> s;
    int m[10001];
    for(int i=0; i<s.length(); i++){
        m[s[i]] = 0;
    }
    for(int i=0; i<s.length(); i++){
        if(m[s[i]]==0){
            cout << s[i];
            m[s[i]] = 1;
        }
    }
    return 0;
}

// 21:00
// 13/01/2023
// Made by VinhSeo