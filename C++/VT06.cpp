#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    long long sum = 0, count = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2!=0) {
            sum += a[i];
            count++;
        }
    }
    cout << fixed << setprecision(4) << (float)sum/count;
    return 0;
}