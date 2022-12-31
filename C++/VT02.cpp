#include<bits/stdc++.h>
using namespace std;

int cmp(int a, int b){
    return a>b;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    if(n<2){
        cout << "NOT FOUND";
        return 0;
    }
    sort(a, a+n);
    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i] == a[n-1]){
            count++;
        }
    }
    if(count == n) cout << "NOT FOUND";
    else cout << a[n-count-1] << endl;
    return 0;
}