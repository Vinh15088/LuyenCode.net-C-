#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    if(a<0) a=-a;
    if(b<0) b=-b;
    int ucln=1, min;
    if(a==0) ucln = b;
    else if(b==0) ucln = a;
    else{
        if(a<b) min = a;
        else min = b;
        for(int i=1; i<=min; i++){
            if(a%i==0 && b%i==0) ucln = i;
        }
    }
    cout << ucln;
    return 0;
}

// cach 2
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){
    int a, b; cin >> a >> b;
    if(a<0 || b<0) cout << abs(gcd(a,b));
    else cout << gcd(a,b);
    return 0;
}