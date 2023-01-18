#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[1001][1001], check = 0;
int ans;
vector<int> v;
int max_ans = 0;

void In(){
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j, int ans){
    if(i==1 && j==1 && a[i][j]==-1) return;
    if(j==1 && j==1 && a[i][j]!=-1) ans += a[1][1];
    if(i==n && j==m && a[i][j]!=-1){
        check = 1;
        v.push_back(ans);
        return;
    }
    if(i<n && a[i+1][j] != -1) Try(i+1, j, ans + a[i+1][j]);
    if(j<m && a[i][j+1] != -1) Try(i, j+1, ans + a[i][j+1]);
    if(i>n || j>m || (i<n && j<m && a[i+1][j]==-1 && a[i][j+1]==-1)) return;
}

int main(){
    In();
    Try(1,1,0);
    if(check == 0) cout << -1;
    else{
        for(int i=0; i<v.size(); i++){
            max_ans = max(max_ans, v[i]);
        }
        cout << max_ans << endl;
    }
    return 0;
}

// 11:44
// 15/01/2023
// Made by VinhSeo