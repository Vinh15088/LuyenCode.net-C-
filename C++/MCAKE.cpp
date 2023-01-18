#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,L; cin >> n >> L;
    int x[L+1] = {0};
    int dukien = 0, thucte = 0;
    while(n--){
        int a,b; cin >> a >> b;
        int count = 0;
        dukien = max(dukien, b-a+1);
        for(int i=a; i<=b; i++){
            if(x[i]==0){
                x[i] = 1;
                count++;
            }
        }
        thucte = max(thucte, count);
    }
    cout << dukien << " " << thucte << endl;
    return 0;
}

// 11:07
// 15/01/2023
// Made by VinhSeo