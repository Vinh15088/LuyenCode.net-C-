#include<bits/stdc++.h>
using namespace std;

int main(){
    int C1,n; cin >> C1 >> n;
    int a[n], b[n];
    set<int> s;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    int win = C1;
    s.insert(C1);
    for(int i=0; i<n; i++){
        if(win==b[i]){
            s.insert(a[i]);
            win = a[i];
        }
    }
    cout << win << " " << s.size();
    return 0;
}

// 09:13
// 14/01/2023
// Made by VinhSeo