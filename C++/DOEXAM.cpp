#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[31];
int ans = 0;
int check(int vt, int k){
    if(k==0) return 0;
    if(vt >= n) return a[n];
    return a[vt] + max(check(vt+1,k-1), check(vt+2,k-1));
}
int main(){
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=2; i++){
        ans = max(ans, check(i,k));
    }
    cout << ans << endl;
    return 0;
}

// 09:41
// 14/01/2023
// Made by VinhSeo