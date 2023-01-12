#include<bits/stdc++.h>
using namespace std;
#define N 11
double a[N];
double solve(){
    a[0] = 1;
    for(int i=1; i<=N; i++){
        a[i] = 1/(a[i-1] + 1);
    }
}

int main(){
    int t; cin >> t;
    solve();
    while(t--){
        int n; cin >> n;
        cout << fixed << setprecision(5) << a[n] << endl;
    }
    return 0;
}