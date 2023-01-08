#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        double n; cin >> n;
        double sum = 2*(1- 1/(n+1));
        cout << fixed << setprecision(8) << sum << endl;
    }
    return 0;
}