#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; 
    int a[1000001];
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=n; i++){
        a[i] += *max_element(a+max(i-k,0), a+i);
        // max_element: trỏ đến phần tử có giá trị lớn nhất trong  phạm vi [first, last]
    }
    cout << *max_element(a, a+n+1);
}

// 17:27
// 12/01/2023
// Made by VinhSeo