#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll n){
    return (n+1)*n/2;
}
int main(){
    ll n,k; cin >> n >> k;
    ll a[100001];
    for(ll i=1; i<=n; i++) cin >> a[i];
    ll prefix[100001];
    for(ll i=1; i<=n; i++) prefix[i] = prefix[i-1] + a[i];
    vector<ll> v;
    while(k--){
        ll l,r; cin >> l >> r;
        v.push_back(prefix[r] - prefix[l-1]);
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}

// 08:05
// 14/01/2023
// Made by VinhSeo