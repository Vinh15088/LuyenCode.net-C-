#include<bits/stdc++.h>
using namespace std;
#define N 1000001
double a[N];

void solve(){
    a[1] = 1;
    for(int i=2; i<=N; i++){
        a[i] = sqrt(i+a[i-1]);
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
