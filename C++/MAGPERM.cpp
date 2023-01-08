#include<bits/stdc++.h>
using namespace std;
#define N 1000001

int n, k;
int a[N];
bool b[N];

int main(){
    cin >> n >> k;
    for(int i=1; i<=n; i++) a[i] = i;
    if(k==0) {
        for(int i=1; i<=n; i++) cout << a[i] << " ";
    }
    else if(n%2!=0) cout << "-1";
    else {
        int i=1;
        while(1){
            if(b[i]==false && i+k <= n){
                swap(a[i], a[i+k]);
                b[i] = true;
                b[i+k] = true;
            }
            else {
                if(b[i] == true) i++;
                else break;
            }
        }
        if(count(b+1, b+1+n, false)) cout << "-1";
        else {
            for(int i=1; i<=n; i++) cout << a[i] << " ";
        }
    }
    return 0;
}