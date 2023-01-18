#include<bits/stdc++.h>
using namespace std;
#define ll long long

int Sum(ll n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n/=10;
    }
    return sum;
}

int main(){
    ll n; cin >> n;
    if(n%Sum(n)==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

// 20:28
// 17/01/2023
// Made by VinhSeo