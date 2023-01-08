#include<bits/stdc++.h>
using namespace std;

double solve(int n){
    if(n==0) return 0;
    return sqrt(2+solve(n-1));
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << fixed << setprecision(5) << solve(n) << endl;
    }
    return 0;
}