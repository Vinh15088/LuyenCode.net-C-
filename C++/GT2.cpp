#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    int a[100000];
    int m=1;
    long long r=0, q;
    a[0]=1;
    for(int i=2; i<=n; i++){
        for(int j=0; j<=m-1; j++){
            q = r;
            r = (a[j]*i + r)/10;
            a[j] = (a[j]*i + q) % 10;
        }
        while(r>0){
            a[m] = r%10;
            ++m;
            r /= 10;
        }
    }
    for(int i=m-1; i>=0; i--){
        cout << a[i];
    }
    cout << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        solve(n);
    }
    return 0;
}

// 11:10
// 13/01/2023
// Made by VinhSeo

