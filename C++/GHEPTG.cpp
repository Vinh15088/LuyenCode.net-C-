#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c; cin >> a >> b >> c;
    if(a+b>c && b+c>a && a+c>b) cout << 0 << endl;
    else{
        if(a>=b && a>=c) cout << abs(a-b-c)+1 << endl;
        if(b>=a && b>=c) cout << abs(b-a-c)+1 << endl;
        if(c>=a && c>=b) cout << abs(c-a-b)+1 << endl;
    }
    return 0;
}

// 22:32
// 13/01/2023
// Made by VinhSeo