#include<bits/stdc++.h>
using namespace std;
#define N 1000001

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        double sum = 0;
        for(int i=n; i>=1; i--){
            sum = sqrt(i + sum);
        }
        cout << fixed << setprecision(5) << sum << endl;
    }
    return 0;
}