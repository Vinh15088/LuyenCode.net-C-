#include<bits/stdc++.h>
using namespace std;
#define N 1000001
double a[1000001];

void INV(){
    a[1] = 1;
    for(int i=2; i<=N; i++){
        a[i] = a[i-1] + (double) 1/(2*i-1);
    }
}

int main(){
    int t; cin >> t; 
    INV();
    while(t--){
        int n; cin >> n;
        cout << fixed << setprecision(5) << a[n] << endl;
    }
    return 0;
}