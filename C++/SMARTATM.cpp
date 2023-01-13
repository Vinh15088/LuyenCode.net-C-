#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, M; cin >> n >> M;
    int a[25];
    int L[25][1000001];
    for(int i=1; i<=n; i++){
        cin >> a[i];
        memset(L[i], 0, sizeof(L[i]));
        for(int j=1; j<=M; j++){
            if(j == a[i]) L[i][j] = 1;
            else {
                if(j>a[i] && L[i][j-a[i]]>0) L[i][j] = L[i][j-a[i]] + 1;
                if(L[i][j] == 0) L[i][j] = L[i-1][j];
                if(L[i][j] > 0 && L[i-1][j] > 0) L[i][j] = min(L[i][j], L[i-1][j]); 
            }
        }
    }
    if(L[n][M]==0) cout << -1;
    else cout << L[n][M];
    return 0;
}

// 09:12
// 13/01/2023
// Made by VinhSeo