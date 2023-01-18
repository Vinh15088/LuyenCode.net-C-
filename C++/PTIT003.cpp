#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll check(ll n){
    ll sum = 0;
    while(n>0){
        sum += n%10;
        n/=10;
    }
    return sum;
}
int main(){
    ll n; cin >> n;
    ll sum = 0;
    while(n>=10){
        n = check(n);
    }
    cout << n << endl;
    return 0;
}

// 17:57
// 15/01/2023
// Made by VinhSeo