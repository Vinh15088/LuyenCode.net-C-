#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define MOD 1e9+1

ll sqr(int x){
    return x*x;
}

ll pow(ll a, ll b, ll MOD){
    if(b==0) return 1;
    else {
        if(b%2==0) return sqr(pow(a, b/2)) % MOD;
        else return (a*(sqr(pow(a, b/2))%MOD)) %MOD;
    }
}

int main(){
    ll a, b; cin >> a >> b;
    ll MOD = 1e9+7;
    cout << pow(a,b,MOD) << endl;
}