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
    int b[m];
    for(int j=0; j<m; j++){
        b[j] = a[k-1][j];
    }
    sort(b, b+m);
    for(int j=0; j<m; j++){
        a[k-1][j] = b[j];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}