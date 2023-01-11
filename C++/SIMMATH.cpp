#include<bits/stdc++.h>
using namespace std;
#define MOD  998244353

int main(){
    int t; cin >> t;
    while(t--){
        long long a,b,c; cin >> a >> b >> c;
        long long SumA = (a*(a+1)/2) % MOD;
        long long SumB = (b*(b+1)/2) % MOD;
        long long SumC = (c*(c+1)/2) % MOD;
        long long ans = (((SumA*SumB) % MOD) * SumC) % MOD;
        cout << ans << endl;
    }
    return 0;
}