#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin >> n;
    map<ll, ll> m;
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        m[x]++;
    }
    long long sum = 0;
    for(auto it:m){
        if(it.second>1) sum += ((it.second-1)*it.second)/2;
    }
    cout << sum << endl;
    return 0;
}

// 16:08
// 13/01/2023
// Made by VinhSeo