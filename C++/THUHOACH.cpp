#include<bits/stdc++.h>
using namespace std;

int n, c; 
int a[21];
bool f[1000001];

int main(){
    cin >> n >> c;
    memset(f, false, sizeof(f));
    f[0] = true;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i=0; i<n; i++){
        for(int j=c-a[i]; j>=0; j--){
            if(f[j] == true) f[j+a[i]] = true;
        }
    }
    while(f[c] == false) --c;
    cout << c;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int n, V, v[21], maxx = 0, a[21] = {0};

void Try(int i){
    for(int j=0; j<=1; j++){
        a[i] = j;
        if(i<n) Try(i+1);
        else {
            int tong = 0;
            for(int m=1; m<=n; m++){
                if(a[m] == 1) tong += v[m];
            }
            if(tong > maxx && tong <= V) maxx = tong;
        }
    }
}

int main(){
    cin >> n >> V;
    for(int i=1; i<=n; i++){
        cin >> v[i];
    }
    Try(1);
    cout << maxx;
    return 0;
}