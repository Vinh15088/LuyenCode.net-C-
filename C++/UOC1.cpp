#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a,b; cin >> a >> b;
    ll sum = 0;
    for(ll i=1; i<=sqrt(a); i++){
        if(a%i==0){
            if(i*i != 0){
                if(b%i != 0) sum += i;
                if(b%(a/i) != 0) sum += (a/i);
            }
            else {
                if(b%i != 0) sum += i;
            }
        }
    }
    cout << sum << endl;
    return 0;
}

// 17:17
// 15/01/2023
// Made by VinhSeo