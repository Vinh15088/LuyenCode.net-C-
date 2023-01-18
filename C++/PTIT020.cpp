#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long

char check(ll k, string s){
    ll l = (ll) s.length();
    while(k > l){
        ll x = l;
        while(2*x < k){
            x *= 2;
        }
        k = k-x-1;
        if(k==0) k = x;
    }
    return s[k-1];
}
int main(){
    ll k; cin >> k;
    string s; cin >> s;
    cout << check(k,s) << endl;
    return 0;
}

// 10:33
// 18/01/2023
// Made by VinhSeo