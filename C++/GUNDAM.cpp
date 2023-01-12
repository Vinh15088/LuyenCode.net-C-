#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    char a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == a[i+1][j] && a[i][j] == '.') count++;
            if(j+1 == m) continue;
            if(a[i][j] == a[i][j+1] && a[i][j] == '.') count++;
        }
    }
    cout << count << endl;
    return 0;
}

// 22:38
// 12/01/2023
// Made by VinhSeo