#include<bits/stdc++.h>
using namespace std;

string Sum(string s1, string s2){
    if(s1.size() < s2.size()) swap(s1,s2);
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    s2 += string(s1.size()-s2.size(), '0');
    string s = "";
    int nho = 0, sum;
    for(int i=0; i<s1.size(); i++){
        sum = (s1[i] - '0') + (s2[i] - '0') + nho;
        s += char(sum%10 + '0');
        nho = sum/10;
    }
    if(nho != 0) s += char(nho + '0');
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    int n; cin >> n;
    string F[100001];
    F[0] = "1";
    F[1] = "1";
    for(int i=2; i<=10000; i++){
        F[i] = Sum(F[i-2], F[i-1]);
    }
    for(int i=0; i<n; i++){
        int x; cin >> x;
        cout << F[x] << endl;
    }
    return 0;
}

// 15:37
// 13/01/2023
// Made by VinhSeo