#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    cout << fixed << setprecision(2);
    if(a==0){
        if(b==0){
            if(c==0) cout << "INF";
            else cout << "NO";
        }
        else {
            cout << (float) -c/b;
        }
    }
    else {
        int delta = b*b - 4*a*c;
        if(delta < 0) cout << "NO";
        else if(delta==0) cout << (float) -b/2*a;
        else {
            cout << (float) (-b - sqrt(delta)) / (2*a) << " " << (float) (-b + (sqrt(delta))) / (2*a);
        }
    }
    return 0;
}