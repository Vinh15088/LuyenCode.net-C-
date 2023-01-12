#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, V; 
    cin >> n >> V;
    int a[n];
    int Min = 1e9;
    for(int i=0; i<n; i++){
        cin >> a[i];
        Min = min(Min, a[i]);
    }
    vector<int> dp(V+1, 0); // tạo vector có V+1 phần tử đều là 0
    dp[0] = 1; // phần tử đầu tiên cho = 1
    for(int i=0; i<n; i++){
        for(int j=V; j>=a[i]; j--){
            if(dp[j-a[i]]){
                dp[j] = 1;
            }
        }
    }
    if(Min > V) cout << 0; //ktra nếu phần tử nhỏ nhất của mảng mà lớn hơn V thì in ra 0
    for(int i=V; i>=Min; i--){
        if(dp[i]){
            cout << i;
            break;
        }
    }
}

// 11:28
// 12/01/2023
// By VinhSeo