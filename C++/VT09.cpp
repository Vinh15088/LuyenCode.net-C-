#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    if(n<2) return false;
    if(n==2 || n==3 || n==5 || n==7) return true;
    if(n%2==0 || n%3==0 || n%5==0 || n%7==0) return false;
    return true;
}

int main(){
    int n; cin >> n;
    int a[n], b[n]; 
    for(int i=0; i<n; i++){
        cin >> a[i];    
    }
    sort(a, a+n);
    for(int i=0; i<n; i++){
        if(check(a[i]) && a[i]!=a[i-1]){
            cout << a[i] << " ";
        }
    }
    return 0;
}