#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<int, int> m;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        m[x]++;
    }
    int count = 0;
    int TNV;
    for(auto it:m){
        if(it.second > count || it.second == count && it.first > TNV){
            count = it.second;
            TNV = it.first;
        }
    }
    cout << TNV << " " << count << endl;
    return 0;
}

// 21:03
// 12/01/2023
// Made by VinhSeo