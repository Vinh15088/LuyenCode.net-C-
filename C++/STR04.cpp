#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    getline(cin, s);
    map<char, int> m;
    for(int i=0; i<s.length(); i++){
        if((s[i] >= 'A' && s[i] <= 'Z')){
            m[s[i]+32]++;
        }
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
            m[s[i]]++;
        }
    }
    for(auto it:m){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}