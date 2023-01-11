#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    if(n==0) return false;
    else {
        int a = sqrt(n);
        if(a*a == n && a>0) return true;
    }
    return false;
}
int main(){
    int n, m; cin >> n >> m;
    int a[n][m];
    vector<int> v;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(check(a[i][j])) v.push_back(a[i][j]);
        }
    }
    if(v.size() == 0) cout << "NOT FOUND";
    else{
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++){
            if(v[i] != v[i+1]) cout << v[i] << " ";
        }
    } 
    return 0;
}