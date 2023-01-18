#include<bits/stdc++.h>
using namespace std;

int tmp(int a, int b){
    return a>b;
}
int main(){
    int n=3;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n, tmp);
    for(int i=0; i<n; i++) cout << a[i] << " ";
    return 0;
}

// 23:43
// 17/01/2023
// Made by VinhSeo