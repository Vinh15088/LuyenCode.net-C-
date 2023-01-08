#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin >> n;
    double sum = 0;
    sum = 1.0 - (double) 1/(n+1);
    cout << fixed << setprecision(5) << sum;
    return 0;
}