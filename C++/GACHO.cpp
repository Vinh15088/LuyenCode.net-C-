#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n; cin >> m >> n;
    // a+b=m
    // 2a + 4b = n
    int a,b;
    // a = m-b
    // 2m-2b+4b=n => 2b = n-2m
    // a = m - (n-2m)/2
    b = (n-2*m)/2;
    a = m - (n-2*m)/2;
    if(a>=0 && b>=0 && 2*b==n-2*m) cout << a << " " << b;
    else cout << -1;
    return 0;
}

// 22:10
// 14/01/2023
// Made by VinhSeo