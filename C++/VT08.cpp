#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n+2];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    a[n] = 0;
    for(int i=0; i<n+1; i++){
        if(i%2==1) a[i] = a[i] + abs(a[i-1]-a[i+1]);
    }
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}