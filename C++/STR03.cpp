#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    int t; cin >> t;
    while(t--){
        char x; cin >> x;
        if(x >= 'A' && x <= 'Z') x += 32;
        int count = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == x) count++;
        }
        cout << count << endl;
    }
    return 0;
}