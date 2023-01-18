#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=1; i<=n; i++) cin >> a[i];
    ll sum = 0;
    for(int i=1; i<=n; i++){
        if(i%2==0) sum += a[i];
    }
    cout << sum << endl;
    return 0;
}

// 11:02
// 14/01/2023
// Made by VinhSeo