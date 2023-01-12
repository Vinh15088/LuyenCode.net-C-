#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    map<int, int> m;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        m[a[i]]++;
    }
    cout << m.size() << endl;
    for(int i=0; i<n; i++){
        if(m[a[i]] > 0){
            cout << a[i] << " " << m[a[i]] << endl;
            m[a[i]] = 0;
        }
    }
    return 0;
}

// 22:56
// 12/01/2023
// Made by VinhSeo