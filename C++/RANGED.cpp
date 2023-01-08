#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c,d; cin >> a >> b >> c >> d;
    if(a>=c&&a<=d || b>=c&&b<=d || c>=a&&c<=b || d>=a&&d<=b) cout << "YES";
    else cout << "NO";
    return 0;
}