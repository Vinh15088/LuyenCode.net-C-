#include<bits/stdc++.h>
using namespace std;

int cmp(int a, int b){
    return a>b;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n, cmp);
    for(int i=0; i<n; i++) cout << a[i] << " ";
    return 0;
}