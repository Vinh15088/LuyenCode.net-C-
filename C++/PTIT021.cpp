#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    cout << a[n-1] - a[0] + 1 - n << endl;
    return 0;
}

// 10:12
// 18/01/2023
// Made by VinhSeo