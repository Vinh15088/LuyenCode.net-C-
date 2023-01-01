#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int count = 0; // dem so am
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] < 0) count++;
    }
    sort(a, a+n);
    int answer;
    int max = a[n-1]*a[n-2]*a[n-3];
    if(count >= 2 && count < n){
        if(max < a[0]*a[1]*a[n-1]) max = a[0] * a[1] * a[n-1];
        answer = max;
    }
    else answer = max;
    cout << answer << endl;
    return 0;
}