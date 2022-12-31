#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){
    int a, b; cin >> a >> b;
    a=abs(a); b=abs(b);
    int ucln = gcd(a, b);
    cout << (a*b)/ucln << endl;
    return 0;
}