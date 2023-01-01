#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    int max = 0;
    for(int i=0; i<n; i++){
        max = a[n-2] * a[n-1];
        if(max < a[0] * a[1]) max = a[0] * a[1];
    } 
    cout << max << endl;
    return 0;
}