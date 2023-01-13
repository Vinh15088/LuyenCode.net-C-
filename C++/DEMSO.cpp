#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int count = 0;
    for(int i=0; i<s.size(); i++){
        if (((s[i]<='Z' && s[i]>='A') || (s[i]<='z' && s[i]>='a')) && (s[i+1]<='9' && s[i+1]>='0')) count++;
    }
    if(s[0] >= '0' && s[0] <= '9') count++;
    cout << count << endl;
    return 0;
}

// 22:10
// 13/01/2023
// Made by VinhSeo