#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    int count = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z' && s[i+1]>='A' && s[i+1]<='Z') ++count;
    }
    if(s[0] >= 'A' && s[0] <= 'Z') ++count;
    cout << count << endl;
    return 0;
}

// 10:02
// 14/01/2023
// Made by VinhSeo