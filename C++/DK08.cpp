#include<bits/stdc++.h>
using namespace std;

int main(){
    double a, b; cin >> a;
    cin.ignore();
    char s; cin >> s;
    cin >> b;
    if(s=='+') cout << fixed << setprecision(2) << a+b;
    if(s=='-') cout << fixed << setprecision(2) << a-b;
    if(s=='*') cout << fixed << setprecision(2) << a*b;
    if(s=='/') {
        if(b==0) cout << "Math Error";
        else cout << fixed << setprecision(2) << a/b;
    }
    return 0;
}