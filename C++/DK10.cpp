#include<bits/stdc++.h>
using namespace std;

bool check(int n){
     if(n%400==0 || n%4==0 && n%100!=0) return true;
        else return false;
}
int main(){
    int m, y; cin >> m >> y;
    if(m<1 || m>12 || y<=0 || y>100000) cout << "INVALID";
    else {
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) cout << "31";
        else if(m==4 || m==6 || m==9 || m==11) cout << "30";
        else{
            if(check(y)) cout << "29";
            else cout << "28";
        }
    }
    return 0;
}