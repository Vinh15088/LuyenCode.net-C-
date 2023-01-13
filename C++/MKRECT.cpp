#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin >> n;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    ll length = -1, width = -1;
    for(ll i=n-1; i>0; i--){
        if(a[i-1] == a[i] && length == -1){
            length = a[i];
            i--;
            continue;
        }
        if(a[i-1] == a[i] && width == -1){
            width = a[i];
            break;
        }
    }
    if(length==-1 || width == -1) cout << 0 << endl;
    else  cout << length*width << endl;
}

// 16:58
// 13/01/2023
// Made by VinhSeo