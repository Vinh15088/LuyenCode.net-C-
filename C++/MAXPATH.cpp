#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[101][101], dp[101][101];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> a[i][j];
        }
        dp[i][1] = a[i][1];
    }
    for(int j=2; j<=m; j++){
        for(int i=1; i<=n; i++){
            if (i>1 && i<n) {
				dp[i][j] = max(max(dp[i-1][j-1], dp[i+1][j-1]), dp[i][j-1]) + a[i][j];
			}
			else {
				if (i == 1)
					dp[i][j] = max(dp[i][j-1], dp[i+1][j-1]) + a[i][j];
				if (i == n) 
					dp[i][j] = max(dp[i][j-1], dp[i-1][j-1]) + a[i][j];
			}
        }
    }
    int answer = 0;
    for(int i=1; i<=n; i++){
        answer = max(answer, dp[i][m]);
    }
    cout << answer << endl;
    return 0;
}