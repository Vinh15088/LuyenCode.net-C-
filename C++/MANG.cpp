#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n], sum = 0;
    int count = 0;
    int count_positive = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
        if(a[i]%2==0) count++;
        if(a[i] > 0) count_positive++;
    }
    cout << sum << " " << count << " ";
    if(count_positive == 0) cout << 0;
    else {
        for(int i=n-1; i>=0; i--){
            if(a[i]>0){
                cout << a[i];
                break;
            }
        }
    }
    return 0;
}

// 21:17
// 13/01/2023
// Made by VinhSeo