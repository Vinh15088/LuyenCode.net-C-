#include<bits/stdc++.h>
using namespace std;

int Ckn(int k, int n){
    if(k==0 || k==n) return 1;
    if(k==1) return n;
    return Ckn(k-1, n-1) + Ckn(k, n-1);
}
int main(){
    int n, k; cin >> n >> k;
    cout << Ckn(k, n);
    return 0;
}