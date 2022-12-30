#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    cout << a+b << endl << a-b << endl << a*b << endl;
    if(b!=0) cout << fixed << setprecision(2) << (float)a/b;
    else cout << "INF";
    return 0;
}