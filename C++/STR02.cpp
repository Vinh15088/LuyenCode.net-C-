#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        for(int i=0; i<s.length(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        }
        for(int i=0; i<s.length(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] -= 32;
                break;
            }
        }
        for(int i=0; i<s.length(); i++){
            if(s[i] == ' ' && s[i+1]>='a' && s[i+1]<='z') s[i+1] -= 32;
        }
        cout << s << endl;
    }
    return 0;
}