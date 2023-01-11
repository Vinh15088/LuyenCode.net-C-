#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k; cin >> n >> m >> k;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int b[n];
    for(int j=0; j<n; j++){
        b[j] = a[j][k-1];
    }
    sort(b, b+n);
    for(int j=0; j<n; j++){
        a[j][k-1] = b[j];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}