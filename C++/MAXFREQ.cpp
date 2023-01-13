#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    map<int, int> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
        m[a[i]]++;
    }
    int Max = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(m[a[i]] > Max){
            Max = m[a[i]];
            ans = a[i];
        }
    }
    cout << ans << " " << Max;
    return 0;
}

// 16:15
// 13/01/2023
// Made by VinhSeo