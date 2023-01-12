#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Max(int a, int b, int c, int d){
    return max(a, max(b, max(c,d)));
}

ll Min(int a, int b, int c, int d){
    return min(a, min(b, min(c,d)));
}
int main(){
    ll xA,yA,xB,yB,xC,yC,xD,yD;
    cin >> xA >> yA >> xB >> yB;
    cin >> xC >> yC >> xD >> yD;
    ll Length = abs(xA-xB) + abs(xC-xD) - (Max(xA,xB,xC,xD) - Min(xA,xB,xC,xD));
    ll Width = abs(yA-yB) + abs(yC-yD) - (Max(yA,yB,yC,yD) - Min(yA,yB,yC,yD));
    if(Length <= 0 || Width <= 0) cout << '0';
    else {
        cout << Length*Width;
    }
    return 0;
}

// 16:52
// 12/01/2023
// Made by VinhSeo