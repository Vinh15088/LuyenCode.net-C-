#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,y1,x2,y2,a,b;
    cin >> x1 >> y1 >> x2 >> y2 >> a >> b;
    if(x1 > x2) swap(x1, x2);
    if(y1 > y2) swap(y1, y2);
    if(a>x1 && a<x2 && b>y1 && b<y2) cout << "YES" << endl;
    else if((a==x1 && b==y1) || (a==x2 && b==y2) || (a==x1 && b==y2) || (a==x2 && b==y1)) cout << "YES" << endl;
    else cout << "NO";
    return 0;
}

// 16:23
// 12/01/2023
// Made by VinhSeo