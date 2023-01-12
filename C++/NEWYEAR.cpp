#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string ss;
    cin.ignore();
    set<string> s;
    while(n--){
        getline(cin, ss);
        s.insert(ss);
    }
    cout << s.size();
    return 0;
}

// 20:45
// 12/01/2023
// Made by VinhSeo
