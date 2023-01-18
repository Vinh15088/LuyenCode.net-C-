#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll n; cin >> n;
    n/=2;
    ll length, width;
    if(n%2==0) length =width = n/2;
    else {
        width = n/2;
        length = width + 1;
    }
    ll S = length * width;
    cout << S << endl;
    return 0;
}

// 11:29
// 14/01/2023
// Made by VinhSeo