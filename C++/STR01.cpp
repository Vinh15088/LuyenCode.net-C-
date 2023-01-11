#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
    return 0;
}