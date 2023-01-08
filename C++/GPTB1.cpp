#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << fixed << setprecision(2);
    long long D = a*e - d*b;
    long long Dx = c*e - f*b;
    long long Dy = a*f - c*d;
    if(D==0){
        if(Dx==0 && Dy==0) cout << "VOSONGHIEM";
        else cout << "VONGHIEM";
    }
    else {
        double x = (double) Dx/D;
        double y = (double) Dy/D;
        if(x!=0 && y!=0) cout << x << " " << y;
        else if(x == 0) cout << abs(x) << " " << y;
        else if(y == 0) cout << x << " " << abs(y);
    }
    return 0;
}

