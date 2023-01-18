#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    n = abs(n);
    n = n%1000;
    if(n<10) cout << 00 << n << endl;
    if(n<100 && n>=10) cout << 0 << n << endl;
    if(n<1000 && n>=100) cout << n << endl;
    return 0;
}

// 11:15
// 14/01/2023
// Made by VinhSeo