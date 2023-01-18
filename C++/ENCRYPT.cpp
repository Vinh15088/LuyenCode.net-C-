#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    string str = "";
    int sum = 0;
    for(int i=0; i<s.size(); i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            str += s[i];
        }
        if(s[i] >= '0' && s[i] <= '9') sum += (int) s[i]-'0';
    }
    cout << str << sum << endl;
    return 0;
}

// 21:52
// 14/01/2023
// Made by VinhSeo