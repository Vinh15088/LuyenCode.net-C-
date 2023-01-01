#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int max = 0;
    for(int i=0; i<n; i++){
        if(a[i]*a[i+1] > max) max = a[i]*a[i+1];
    }
    cout << max << endl;
    return 0;
}