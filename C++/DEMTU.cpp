#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    getline(cin, s);
    long long count = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' ' && s[i+1] == ' '|| s[i] != ' ' && i == s.length()-1) count++;
    }
    cout << count << endl;
    return 0;
}