#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int Min = a[0], Max = a[0];
    for(int i=1; i<n; i++){
        if(a[i] < Min) Min = a[i];
        if(a[i] > Max) Max = a[i];
    }
    for(int i=0; i<n; i++){
        if(Min == a[i]) {
            cout << a[i] << " " << i+1 << " ";
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(Max == a[i]){
            cout << a[i] << " " << i+1;
            break;
        }
    }
    return 0;
}

// 15:57
// 13/01/2023
// Made by VinhSeo