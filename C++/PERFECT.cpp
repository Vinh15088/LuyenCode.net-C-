#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int Min(a[1] - a[0]);
    for(int i=2; i<n; i++){
        Min = min(Min, a[i]-a[i-1]);
    }
    cout << Min << endl;
    return 0;
}