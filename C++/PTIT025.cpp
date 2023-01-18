#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<string> v;
    cin.ignore();
    for(int i=0; i<n; i++){
        string s; getline(cin, s);
        v.push_back(s);
    }
    int Math[n], Physics[n], Cpp[n], Sum[n];
    for(int i=0; i<n; i++) cin >> Math[i];
    for(int i=0; i<n; i++) cin >> Physics[i];
    for(int i=0; i<n; i++) cin >> Cpp[i];
    for(int i=0; i<n; i++) Sum[i] = Math[i] + Physics[i] + Cpp[i];
    int Max = 0;
    for(int i=0; i<n-1; i++){
        Max = max(Max,max(Sum[i], Sum[i+1]));
    }
    for(int i=0; i<n; i++){
        if(Sum[i] == Max){
            cout << v[i] << " " << Math[i] << " " << Physics[i] << " " << Cpp[i] << endl;
        }
    }
    return 0;
}

// 09:30
// 18/01/2023
// Made by VinhSeo

// Cach 2
#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

struct sv{
    string name;
    int math, physic, cpp, sum;
    bool operator>(sv other){
        return sum > other.sum;
    }
};

bool check(sv a, sv b){
    return a.sum > b.sum;
}

int main(){
    fast();
    int n; cin >> n;
    cin.ignore();
    vector<sv> a(n);
    for(auto &x:a) getline(cin, x.name);
    for(auto &x:a) cin >> x.math;
    for(auto &x:a) cin >> x.physic;
    for(auto &x:a) cin >> x.cpp;
    int Max = 0;
    for(auto &x:a){
        x.sum = x.math + x.physic + x.cpp;
        Max = max(Max, x.sum);
    }
    for(auto &x:a){
        if(x.sum == Max){
            cout << x.name << " " << x.math << " " << x.physic << " " << x.cpp << endl;
        }
    }
    return 0;
}