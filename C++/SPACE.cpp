#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        int count = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == ' ' && s[i+1] != ' ') count++;
        }
        cout << count << endl;
    }
    return 0;
}