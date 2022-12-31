#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){
    int a, b; cin >> a >> b;
    int ucln = 1;
    if(a<0 || b<0) ucln = abs(gcd(a,b));
    else ucln = gcd(a,b);
    if(b==0) cout << "INVALID";
    else if(b < 0) {
        if(abs(a/ucln) % abs(b/ucln) == 0) cout << (a/ucln)/(b/ucln);
        else cout << -a/ucln << " " << -b/ucln;
    }
    else {
        if(abs(a/ucln) % abs(b/ucln)==0) cout << (a/ucln)/(b/ucln);
        else cout << a/ucln << " " << b/ucln;
    }
    return 0;
}