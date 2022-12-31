#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    reverse(s.begin(), s.end());
    while(s[0]=='0') s.erase(s.begin());
    if(s[s.size()-1] == '-') s.erase(s.size()-1);
    cout << s << endl;
    return 0;
}