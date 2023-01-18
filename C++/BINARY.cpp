// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; cin >> n;
//     int a[n];
//     int sz = (int) pow(2.0, n);
//     for(int i=0; i<sz; i++){
//         int j=n-1, temp=i;
//         while(temp != 0){
//             a[j--] = temp%2;
//             temp /= 2;
//         }
//         for(int k=0; k<n; k++){
//             if(k<=j) cout << 0;
//             else cout << a[k];
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 23:40
// 14/01/2023
// Made by VinhSeo


#include<bits/stdc++.h>
using namespace std;

int n, a[21];
void Solve(){
    for(int i=1; i<=n; i++){
        cout << a[i];
    }
    cout << endl;
}

void check(int i){
    for(int j=0; j<=1; j++){
        a[i] = j;
        if(i==n) Solve();
        else check(i+1);
    }
}

int main(){
    cin >> n;
    check(1);
    return 0;
}